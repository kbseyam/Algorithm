#include <iostream>
using namespace std;

enum enWeekDay { Sun, Mon, Tue, Wed, Thu, Fri, Sat };
void printWeekDayMenu();
enWeekDay readWeekDay();
string getWeekDayName(enWeekDay mEnWeekDay);

int main() {
    printWeekDayMenu();

    cout << "today is " << getWeekDayName(readWeekDay()) << endl;

    return 0;
}

void printWeekDayMenu() {
    cout << "\n***********************\n";
    cout << "       Week Days       \n";
    cout << "***********************\n";
    cout << "0: Sunday\n";
    cout << "1: Monday\n";
    cout << "2: Tuesday\n";
    cout << "3: Wednesday\n";
    cout << "4: Thrusday\n";
    cout << "5: Friday\n";
    cout << "6: Saturday\n";
    cout << "***********************" << endl;
}

enWeekDay readWeekDay() {
    int weekDayNum;
    cout << "Please enter the number of day?\n";
    cin >> weekDayNum;

    return (enWeekDay) weekDayNum;

}

string getWeekDayName(enWeekDay mEnWeekDay) {
    switch (mEnWeekDay) {
        case enWeekDay::Sun:
            return "Sunday";
            break;
        case enWeekDay::Mon:
            return "Monday";
            break;
        case enWeekDay::Tue:
            return "Tuesday";
            break;
        case enWeekDay::Wed:
            return "Wednesday";
            break;
        case enWeekDay::Thu:
            return "Thrusday";
            break;
        case enWeekDay::Fri:
            return "Friday";
            break;
        case enWeekDay::Sat:
            return "Saturday";
            break;
        default:
            return "Not a week day!\n";
    }
}