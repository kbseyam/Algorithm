#include <iostream>
using namespace std;

int readIntNumInRange(int from, int to) {
    int number;
    cin >> number;

    while (number < from || number > to)
    {
        cout << "Wrong number,";
        cout << " Please enter number again: ";
        cin >> number;
    }
    
    return number;
}

int main() {
    
    cout << "Age (18 to 60): ";
    int age = readIntNumInRange(18, 60);

    return 0;
}