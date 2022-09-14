#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    srand(time(NULL));
    cout << "Скільки хочете елементів у масиві: ";
    int Count;
    cin >> Count;
    char* p;
    p = (char*)malloc(Count * sizeof(char));
    if (p == NULL) {
        cout << "\nПомилка виділення пам'яті!\n";
        return -1;
    }

    cout << "\nМасив наразі має такий вигляд:\n";

    for (int i = 0; i < Count; i++) {
        p[i] = (rand() % 25) + 97; //97 - 122
        cout << p[i] << " ";
    }

    cout << "\nСкільки хочете елементів у масиві тепер: \n";
    int Count2;
    cin >> Count2;
    p = (char*)realloc(p,Count2 * sizeof(char));

    cout << "\nМасив наразі має такий вигляд:\n";
    for (int i = Count; i < Count2; i++) {
        p[i] = (rand() % 25) + 97;
    }

    for (int i = 0; i < Count2; i++) {
        cout << p[i] << " ";
    }

    free(p);
}

