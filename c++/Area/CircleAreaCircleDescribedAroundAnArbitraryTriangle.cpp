#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265359;

int main() {

    int a, b, c;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    float p = (a + b + c) / 2.0;

    float area = PI * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);

    cout << "\nArea: " << round(area); 

    return 0;
}