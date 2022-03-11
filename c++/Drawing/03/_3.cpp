#include <iostream>
using namespace std;

int main() {

    short lines;
    do
    {
        cout << "Lines: ";
        cin >> lines;
    } while (lines < 1 || lines % 2 == 0);
    
    for (short i = 1; i <= lines / 2 + 1; i++) {

        for (short s = 1; s <= lines / 2 - i + 1; s++) {
            cout << '-';
        }

        for (short j = 1; j < i * 2; j++) {
            if (j == 1 || j == i * 2 - 1) {
                cout << '*';
            } else {
                cout << ' ';
            }           
        }

        for (short s = 1; s <= lines / 2 - i + 1; s++) {
            cout << '-';
        }

        cout << endl;
    }

    for (short i = 1; i <= lines / 2; i++) {
        for (short s = 1; s <= i; s++) {
            cout << '-';
        }

        for (short j = 1; j < lines - i * 2 + 1; j++) {
            if (j == 1 || j == lines - i * 2) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }

        for (short s = 1; s <= i; s++) {
            cout << '-';
        }

        cout << endl;
    }

    return 0;
}