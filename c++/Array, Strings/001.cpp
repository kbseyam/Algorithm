// Write a function that returns the largest element in a list.

#include <iostream>
using namespace std;

void readArray(int arr[], int size);
int maxElement(int arr[], int size);

int main() {
    int arraySize;
    cout << "Array Size (1..999): ";
    cin >> arraySize;

    int arr[999];
    readArray(arr, arraySize);

    cout << maxElement(arr, arraySize);

    return 0;
}

void readArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << " = ";
        cin >> arr[i];
    }
}

int maxElement(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}