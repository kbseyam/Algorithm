#include <iostream>
using namespace std;

int main() {

    short numMonth;
    string month;

    do {
        cin >> numMonth;
    } while (numMonth < 1 || numMonth > 12);
    
    if (numMonth <= 6) {
        switch (numMonth) {
            case 1:
                month = "January";
                break;
            case 2:
                month = "February";
                break;
            case 3:
                month = "March";
                break;
            case 4:
                month = "April";
                break;
            case 5:
                month = "May";
                break;
            default:
                month = "June";
        }
    } else {
        switch (numMonth) {
            case 7:
                month = "July";
                break;
            case 8:
                month = "August";
                break;
            case 9:
                month = "Septemper";
                break;
            case 10:
                month = "October";
                break;
            case 11:
                month = "November";
                break;
            default:
                month = "December";
        }
    }

    cout << month;

    return 0;
}