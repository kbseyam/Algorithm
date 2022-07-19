#include <iostream>
using namespace std;

int sumOddNum(int num);

int main() {

    int num;
    cout << "Num: ";
    cin >> num;

    cout << sumOddNum(num);

    return 0;
}

int sumOddNum(int num) {
    int sum = 0;

    for (int i = 1; i <= num; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    return sum;
}