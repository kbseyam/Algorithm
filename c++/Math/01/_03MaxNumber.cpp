#include <iostream>
using namespace std;

int main() {

    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "The biggest number is '" << num1 << "' (First number)"; 
    } else if (num2 > num1) {
        cout << "The biggest number is '" << num2 << "' (Second number)"; 
    } else {
        cout << "Equal";
    }

    return 0;
}