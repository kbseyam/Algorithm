// Program to find sum of even numbers between 50 to 100.
#include <iostream>
using namespace std;

int main() {

    int sum = 0;

    for (int i = 50; i <= 100; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    cout << sum;

    return 0;
}