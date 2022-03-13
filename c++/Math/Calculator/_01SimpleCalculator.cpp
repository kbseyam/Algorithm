#include <iostream>
using namespace std;

int main() {

    float num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);

    return 0;
}