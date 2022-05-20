#include <iostream>
using namespace std;

const float PI = 3.1415;

int main() {

    float a;
    cout << "a: ";
    cin >> a;
    float b;
    cout << "b: ";
    cin >> b;

    float area = PI * ((b * b) / 4) * ((2 * a - b) / (2 * a + b));

    cout << "Area: " << area;

    return 0;
}