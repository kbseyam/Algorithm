#include <iostream>
using namespace std;

const float PI = 3.1415;

int main() {

    float d;
    cout << "Diameter: ";
    cin >> d;

    float area = (PI * (d * d)) / 4;

    cout << "Area: " << area;

    return 0;
}