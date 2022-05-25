#include <iostream>
using namespace std;

void readGrades(float grades[3]) {  // arrays in parameter by default is ref
    cout << "Please neter grade1?\n";
    cin >> grades[0];
    cout << "Please neter grade2?\n";
    cin >> grades[1];
    cout << "Please neter grade3?\n";
    cin >> grades[2];
}

float calcAVGGrades(float grades[3]) {
    return (grades[0] + grades[1] + grades[2]) / 3;
}

int main() {

    float grades[3];

    readGrades(grades);

    cout << "\n*******************************************\n";
    cout << "The avreage of grades is " << calcAVGGrades(grades);

    return 0;
}