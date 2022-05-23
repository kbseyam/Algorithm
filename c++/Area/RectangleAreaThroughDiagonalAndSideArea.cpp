#include <iostream>
#include <cmath>
using namespace std;

double rectangleAreaThroughDiagonalAndSideArea(int a, int d)
{
    return a * sqrt(pow(d, 2) - pow(a, 2));
}

int main()
{

    double a, d;

    cout << "a: ";
    cin >> a;
    cout << "d: ";
    cin >> d;

    cout << "\nArea: " << rectangleAreaThroughDiagonalAndSideArea(a, d);

    return 0;
}