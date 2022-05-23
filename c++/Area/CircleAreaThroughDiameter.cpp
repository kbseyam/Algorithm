#include <iostream>
using namespace std;

const float PI = 3.1415;

float circleAreaThroughDiameter(float d)
{
    return (PI * (d * d)) / 4;
}

int main()
{

    float d;
    cout << "Diameter: ";
    cin >> d;

    cout << "Area: " << circleAreaThroughDiameter(d);

    return 0;
}