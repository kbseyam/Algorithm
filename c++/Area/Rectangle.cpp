#include <iostream>
using namespace std;

double rectangleArea(double a, double b);

int main() {

    double a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    cout << rectangleArea(a, b);

    return 0;
}

double rectangleArea(double a, double b) {
    return a * b;
}