#include <iostream>
using namespace std;

int factorial(int num) {

    int f = 1;

    for(int i = 1; i <= num; i++) {
        f *= i;
    }

    return f;
}

int main() {

    cout << factorial(5);

    return 0;
}