#include <iostream>
using namespace std;

const float PI = 3.1415;

float circleAreaInscribedInAnIsoscelesTriangle(float a, float b)
{
    return PI * ((b * b) / 4) * ((2 * a - b) / (2 * a + b));
}

int main()
{

    float a;
    cout << "a: ";
    cin >> a;
    float b;
    cout << "b: ";
    cin >> b;

    cout << "Area: " << circleAreaInscribedInAnIsoscelesTriangle(a, b);

    return 0;
}