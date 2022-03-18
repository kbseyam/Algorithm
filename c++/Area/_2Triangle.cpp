#include <iostream>
#include <cmath>
using namespace std;

double triangleArea(double a, double b, double c);

int main() {

    double a, b, c;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    cout << triangleArea(a, b, c);

    return 0;
}

double triangleArea(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s  -c));
}