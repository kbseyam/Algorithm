#include <iostream>
using namespace std;

int main() {

    int hours;
    cout << "Hours: ";
    cin >> hours;

    float days = hours / 24.0;
    float weeks = days / 7.0;

    cout << weeks << " Weeks\n" << days << " Days";

    return 0;
}