#include <iostream>
using namespace std;

void swapNumber(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{

    int number1 = 10, number2 = 5;

    cout << "\nbefore swap\nnumber1 = " << number1 << " number2 = " << number2 << endl;

    swapNumber(number1, number2);

    cout << "after swap\nnumber1 = " << number1 << " number2 = " << number2 << endl;

    return 0;
}