// Write a C program to find the sum of individual digits of positive integer
#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "number: ";
    cin >> number;

    int sum = 0;

    while (number >= 1) {
        sum += number % 10;
        number = number / 10;
    } 

    cout << sum;

    return 0;
}