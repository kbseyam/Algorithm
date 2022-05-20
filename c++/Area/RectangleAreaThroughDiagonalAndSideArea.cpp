#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double a, d;

    cout << "a: ";
    cin >> a;
    cout << "d: ";
    cin >> d;

    double area = a * sqrt(pow(d, 2) - pow(a, 2));

    cout << "\nArea: " << area;

    return 0;
}