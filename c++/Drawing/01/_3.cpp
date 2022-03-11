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

        for (short j = 1; j <= x - i + 1; j++) {
            cout << '*';
        }

        cout << endl;

    }
        
    return 0;
}