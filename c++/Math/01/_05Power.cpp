#include <iostream>
using namespace std;

long double power(long double num, long double pow) {

    long double p = 1;

    for (int i = 1; i <= pow; i++) {
        p *= num;
    }

    return p;
}

int main() {

    cout << power(45456, 16);

    return 0;
}