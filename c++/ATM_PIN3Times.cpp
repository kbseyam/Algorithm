#include <iostream>
using namespace std;

bool chcekPinCard();

int main() {

    chcekPinCard();

    return 0;
}

bool chcekPinCard() {
    int attempts = 0;
    int pin;

    do
    {
        cout << "Pin: ";
        cin >> pin;

        if (pin == 1234) {
            cout << "\nYour balance is: 7500\n";
            return 1;
        }

        cout << "Wrong pin\n";
        attempts++;
        
    } while (attempts != 3);

    cout << "\nCard is locked\n";
    return 0;
}