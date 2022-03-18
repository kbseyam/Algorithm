#include <iostream>
using namespace std;

const double PI = 3.14159265359;
double circleArea(double r);

int main() {

    double r;
    cout << "r: ";
    cin >> r;

    cout << circleArea(r);

    return 0;
}

double circleArea(double r) {
    return PI * (r * r);
}