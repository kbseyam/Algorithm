#include <iostream>
using namespace std;

int main() {

    short x;

    do
    {
        cout << "X: ";
        cin >> x;
    } while (x < 1);

    for (short i = 1; i <= x; i++) {

        for (short s = 1; s <= x - i; s++) {
            cout << ' ';
        }

        for (short j = 1; j <= i; j++) {
            cout << '*';
        }

        cout << endl;

    }

}