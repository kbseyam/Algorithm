#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265359;

float circleAreaCircleDescribedAroundAnArbitraryTriangle(float a, float b, float c)
{
    float p = (a + b + c) / 2.0;
    return PI * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);
}

int main()
{

    float a, b, c;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    cout << "\nArea: " << round(circleAreaCircleDescribedAroundAnArbitraryTriangle(a, b, c));

    return 0;
}