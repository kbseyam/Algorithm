// Program to find odd or even number using conditional operator
#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is Even";
    } else {
        cout << num << " is Odd";
    }

    return 0;
}