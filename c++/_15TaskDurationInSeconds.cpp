#include <iostream>
using namespace std;

int main() {

    int days, hours, minutes, seconds;

    cout << "Days: ";
    cin >> days;
    cout <<"Hours: ";
    cin >> hours;
    cout << "Minutes: ";
    cin >> minutes;
    cout << "Seconds: ";
    cin >> seconds;

    long totalSeconds = (days * 86400) + (hours * 3600) +
        (minutes * 60) + seconds;
    
    cout << totalSeconds << " Seconds";

    return 0;
}