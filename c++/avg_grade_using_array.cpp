#include <iostream>
using namespace std;

int main() {

    float grades[3];

    cout << "Please neter grade1?\n";
    cin >> grades[0];
    cout << "Please neter grade2?\n";
    cin >> grades[1];
    cout << "Please neter grade3?\n";
    cin >> grades[2];

    float avg = (grades[0] + grades[1] + grades[2]) / 3;

    cout << "\n*******************************************\n";
    cout << "The avreage of grades is " << avg;

    return 0;
}