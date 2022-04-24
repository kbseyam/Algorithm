// Write a C program to check whether given number is perfect number or Not.
#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "number: ";
    cin >> num;

    int temp = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0)
        {
            temp += i;
        }
    }

    if (temp == num)
    {
        cout << num << " is a perfect number";
    } else
    {
        cout << num << " is not a perfect number";
    }
    
    

    return 0;
}