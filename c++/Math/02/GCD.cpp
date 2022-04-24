// Write a C program to find the GCD of two given integers.
#include <iostream>
using namespace std;

int main()
{

    int num1;
    cout << "number 1: ";
    cin >> num1;

    int num2;
    cout << "number 2: ";
    cin >> num2;

    if (num1 > num2)
    {
        for (int i = num2; i > 0; i--)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                cout << "GCD: " << i;
                break;
            }
        }
    }
    else
    {
        for (int i = num1; i > 0; i--)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                cout << "GCD: " << i;
                break;
            }
        }
        
    }

    return 0;
}