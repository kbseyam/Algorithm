#include <iostream>
using namespace std;

double trapezoidArea(double b1, double b2, double h);

int main() {

    double b1, b2, h;
    cout << "b1: ";
    cin >> b1;
    cout << "b2: ";
    cin >> b2;
    cout << "h: ";
    cin >> h;

    cout << trapezoidArea(b1, b2, h);

    return 0;
}

double trapezoidArea(double b1, double b2, double h) {
    return ((b1 + b2) / 2) * h;
}