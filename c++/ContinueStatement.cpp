#include <iostream>
using namespace std;

int main() {
    int sum = 0, number = 0;

    for (int i = 0; i < 5; i++) {
        cin >> number;
        if (number >= 50) {
            continue;
        }

        sum += number;
    }

    cout << sum;

    return 0;
}