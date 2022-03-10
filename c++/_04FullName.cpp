#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string fName;
    string lName;
    cin >> fName;
    cin >> lName;

    string fullName = fName.append(lName);

    cout << fullName;

    return 0;
}