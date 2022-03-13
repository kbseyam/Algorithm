#include <iostream>
using namespace std;

int main() {

    int number, sum = 1;

    do
    {
        cout << "Enter a number: ";
        cin >> number;
    } while (number <= 0);
    
    for (int i = 1; i <= number; i++) {
        cout << i << ((i < number) ? " * " : "\n");
        sum *= i;
    }

    cout << sum;

    return 0;
}