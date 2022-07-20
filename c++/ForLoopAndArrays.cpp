#include <iostream>
using namespace std;

void readArrayData(int arr[100], int &length);
void printArrayData(int arr[100], int length);
int calculateSumArray(int arr[100], int length);
float calculateAvgArray(int arr[100], int length);

int main() {

    int arr[100], length = 0;

    readArrayData(arr, length);
    printArrayData(arr, length);

    int sum = calculateSumArray(arr, length);
    
    cout << "***************************************" << endl;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << (float)sum / length << endl;

    return 0;
}

void readArrayData(int arr[100], int &length) {

    cout << "How many numbers do you want to enter? (1 to 100)\n";
    cin >> length;

    for (int i = 0; i < length; i++) {
        cout << "Please enter number " << i + 1 << "\n";
        cin >> arr[i];
    }
}

void printArrayData(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << "Number [" << i + 1 << "] : " << arr[i] << "\n";
    }
}

int calculateSumArray(int arr[100], int length) {
    int sum = 0;

    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }

    return sum;
}