#include <iostream>
using namespace std;

int main() {

    int num = 0;
    int sum = 0;

    while (num != -99) {
        sum += num;
        cin >> num;
    }

    cout << "Sum = " << sum;

    return 0;
}