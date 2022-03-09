#include <iostream>
using namespace std;

int main() {
    short mark;
    cin >> mark;
    
    if (mark >= 50) {
        cout << "Pass";
    } else {
        cout << "Fail";
    }

    return 0;
}