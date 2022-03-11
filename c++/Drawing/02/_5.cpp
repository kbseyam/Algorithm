#include <iostream>
using namespace std;

int main() {

    short lines;
    do
    {
        cout << "Lines: ";
        cin >> lines;
    } while (lines < 1 || lines % 2 == 0);
    
    for (short i = 1; i <= lines; i++) {

        for (short s = 1 ; s <= lines - i; s++) {
            cout << ' ';
        }

        for (short j = 1; j <= i; j++) {
            cout << '*';
        }

        cout << endl;

    }

    for (short i = 1; i < lines; i++) {

        for (short s = 1; s <= i; s++) {
            cout << ' ';
        }

        for (short j = 1; j <= lines - i; j++) {
            cout << '*';
        }

        cout << endl;

    }

    return 0;
}