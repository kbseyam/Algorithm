#include <iostream>
using namespace std;

int main() {

    short lines;
    do
    {
        cout << "Lines: ";
        cin >> lines;
    } while (lines < 1);
    
    for (short i = 1; i <= lines; i++) {

        for (short s = 1; s <= lines - i; s++) {
            cout << ' ';
        }

        for (short j = 1; j < i * 2; j++) {
            cout << '*';
        }

        cout << endl;

    }

    return 0;
}