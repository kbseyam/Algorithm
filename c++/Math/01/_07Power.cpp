#include <iostream>
using namespace std;

long double power(long double num, long double pow) {

    for (int i = 1; i < pow; i *= 2) {
        num *= num;
    }

    return num;
}

int main() {

    cout << power(45456, 16);

    return 0;
}