#include <iostream>
using namespace std;

int main() {
    
    string fName;
    string lName;
    cin >> fName;
    cin >> lName;

    string fullName = fName + " " + lName;

    cout << fullName;

    return 0;
}