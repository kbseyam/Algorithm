#include <iostream>
using namespace std;

int readIntNumInRange(int from, int to) {
    int number;
    do {
        cin >> number;
    } while (number < from || number > to);

    return number;
}

int main() {
    
    cout << "Age (18 to 60): ";
    readIntNumInRange(18, 60);

    return 0;
}