#include <iostream>
using namespace std;

float power(float num, float pow) {

    float p = 1;

    for (int i = 1; i <= pow; i++) {
        p *= num;
    }

    return p;
}

int main() {

    cout << power(6, 6);

    return 0;
}