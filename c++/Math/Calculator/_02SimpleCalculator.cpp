#include <iostream>
using namespace std;

int main()
{

    float num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nWrite down the operation number then press enter\n"
         << "0: To end the program.\n"
         << "1: To print the sum.\n"
         << "2: To print the subtraction.\n"
         << "3: To print the multiplication.\n"
         << "4: To print the division.\n-------------------------\n";

    short option;
    cin >> option;

    switch (option)
    {
    case 0:
        cout << "Program end.";
        break;
    case 1:
        printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
        break;
    case 2:
        printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
        break;
    case 3:
        printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
        break;
    case 4:
        printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
        break;
    default:
        cout << "ERROR";
    }

    return 0;
}