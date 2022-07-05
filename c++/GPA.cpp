#include <iostream>
using namespace std;

int main() {

    double grade;
    double hours;
    int numOfGrades;
    double totalCreditHours = 0;
    double totalGrades = 0;

    cout << "Number of grades: ";
    cin >> numOfGrades;

    for (int i = 1; i <= numOfGrades; i++) {
        cout << "Grade " << i << ": ";
        cin >> grade;
        cout << "Hours: ";
        cin >> hours;

        totalGrades += (grade * hours);
        totalCreditHours += hours;
    }

    double gpa = totalGrades / totalCreditHours;

    cout << "\nGPA = " << gpa;

    return 0;
}