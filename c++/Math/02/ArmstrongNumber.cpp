// Write a C program to Check whether given number is Armstrong Number or Not.
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int number;
    cout << "number: ";
    cin >> number;
    int tempNum = number;

    int lengthNumber = 0;
    int sum = 0;

    while (tempNum >= 1) {
        lengthNumber += 1;
        tempNum = tempNum / 10;
    } 

    tempNum = number;

    while (number >= 1) {
        sum += pow(number % 10, lengthNumber);
        number = number / 10;
    } 

    if (sum == tempNum) {
        cout << tempNum << " is Armstrong Number";
    }

    return 0;
}