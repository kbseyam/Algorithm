// Write a C program to find the sum and average of three numbers.

#include <iostream>
using namespace std;

int main() {

    int num1, num2, num3;

    cout << "number 1: ";
    cin >> num1;
    cout << "number 2: ";
    cin >> num2;
    cout << "number 3: ";
    cin >> num3;

    int sum = num1 + num2 + num3;
    float avg = sum / 3;

    cout << "Sum: " << sum << endl << "Avreage: " << avg;

    return 0;
}