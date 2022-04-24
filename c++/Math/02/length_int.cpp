// Program to count the number of digits in a given integer using loop
#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "number: ";
    cin >> number;

    int lengthNumber = 0;

    while (number >= 1) {
        lengthNumber += 1;
        number = number / 10;
    }

    cout << lengthNumber;

    return 0;
}