#include <iostream>
using namespace std;

int main() {
    short age;
    bool dL;        // dL -> Driver License
    cout << "Age: ";
    cin >> age;
    cout << "Driver License:(0/1) ";
    cin >> dL;

    if (age > 21 && dL) {
        cout << "Hired";
    } else {
        cout << "Rejected";
    }

    return 0;
    
    
}