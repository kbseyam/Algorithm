#include <iostream>
using namespace std;

int main() {

    int penny, nickel, dime, quarter, dollar;

    cout << "Penny: ";
    cin >> penny;
    cout << "Nickel: ";
    cin >> nickel;
    cout << "Dime: ";
    cin >> dime;
    cout << "Quarter: ";
    cin >> quarter;
    cout << "Dollar: ";
    cin >> dollar;

    int totalPennies = (penny + (nickel * 5) + (dime * 10) + (quarter * 25) + (dollar * 100));
    float totalDollars = totalPennies / 100.0;

    cout << totalPennies << " Pennies\n";
    cout << totalDollars << " Dollars";

    return 0;
}