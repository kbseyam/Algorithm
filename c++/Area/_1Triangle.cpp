#include <iostream>
using namespace std;

double triangleArea(double h, double b);

int main() {

    double h, b;
    cout << "h: ";
    cin >> h;
    cout << "b: ";
    cin >> b;

    cout << triangleArea(h, b);

    return 0;
}

double triangleArea(double h, double b) {
    return 0.5 * h * b;
}