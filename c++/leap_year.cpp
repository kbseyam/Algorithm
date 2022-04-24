// Program to find whether the given year is leap year or not.
#include <iostream>
using namespace std;

int main() {

    int year;
    cout << "year: ";
    cin >> year;

    if (year % 4 == 0) {
        cout << year << " is leap year";
    }

    return 0;
}