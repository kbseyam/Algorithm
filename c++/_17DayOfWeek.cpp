#include <iostream>
using namespace std;

int main() {

    short day;

    do {
        cin >> day;
    } while (day < 1 || day > 7);
    
    switch (day) {
        case 1: 
            cout << "Sunday"; 
            break;
        case 2: 
            cout << "Monday"; 
            break;
        case 3: 
            cout << "Tuesday"; 
            break;
        case 4: 
            cout << "Wednesday"; 
            break;
        case 5: 
            cout << "Thursday"; 
            break;
        case 6: 
            cout << "Friday"; 
            break;
        default : 
            cout << "Saturday"; 
    }

    return 0;
}