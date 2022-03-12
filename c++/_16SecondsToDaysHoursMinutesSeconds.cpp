#include <iostream>
using namespace std;

int main() {

    long numOfSeconds;
    cout << "Seconds: ";
    cin >> numOfSeconds;

    int days = 0, hours = 0, minutes = 0, seconds = 0;

    while (numOfSeconds > 0) {
        
        if (numOfSeconds >= 86400) {
            numOfSeconds -= 86400;
            days++;
        } else if (numOfSeconds >= 3600) {
            numOfSeconds -= 3600;
            hours++;
        } else if (numOfSeconds >= 60) {
            numOfSeconds -= 60;
            minutes++;
        } else {
            seconds = numOfSeconds;
            numOfSeconds = 0;
        }

    }

    cout << days << ":" << hours << ":" << minutes << ":" << seconds;
    

}