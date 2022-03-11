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

        for (short s = 1; s < i; s++) {
            cout << ' ';
        }

        for (short j = 0; j <= (lines - i) * 2; j++) {
            cout << '*';
        }

        cout << endl;

    }

    return 0;
}