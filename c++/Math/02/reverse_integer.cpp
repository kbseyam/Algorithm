// Program to find the reverse of a given integer.
#include <iostream>
#include <string>
using namespace std;

int main() {

    int num;
    cout << "number: ";
    cin >> num;

    string reversedNum = "";

    while (num >= 1) {
        reversedNum += to_string(num % 10);
        num /= 10;
    }

    cout << reversedNum;

    return 0;
}