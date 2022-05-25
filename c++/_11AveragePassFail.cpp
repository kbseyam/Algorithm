#include <iostream>
using namespace std;

void readMarks(int marks[3]) {
    cout << "Mark1: ";
    cin >> marks[0];
    cout << "Mark2: ";
    cin >> marks[1];
    cout << "Mark3: ";
    cin >> marks[2];
}

void calcAvgMarks(int marks[3], int &avg) {
    avg = (marks[0] + marks[1] + marks[2]) / 3;
}

void printResult(int avg) {
    cout << avg << endl;
    if (avg >= 50) {
        cout << "Pass";
    } else {
        cout << "Fail";
    }
}

int main() {
    int avg;
    int marks[3];

    readMarks(marks);
    calcAvgMarks(marks, avg);
    printResult(avg);

    return 0;
}