#include <iostream>
using namespace std;

int main() {

    short lines;
    short columns;

    do
    {
        cout << "Lines: ";
        cin >> lines;
        cout << "Columns: ";
        cin >> columns;
    } while (lines < 1 || columns < 1);

    for (short l = 1; l <= lines; l++) {

        for (short s = 1; s < l; s++) {
            cout << ' ';
        }

        for (short c = 1; c <= columns; c++) {
            cout << '*';
        }

        cout << endl;

    }    

    return 0;
}