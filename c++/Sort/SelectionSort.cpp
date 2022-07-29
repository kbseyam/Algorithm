#include <iostream>
using namespace std;

void selectionSort(int arr[10]);

int main() {

    int arr[10] = { 88, 105, 21, 60, 999, 31, 1, 44, 10, 7 };
    selectionSort(arr);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << '\n';
    }

    return 0;
}

void selectionSort(int arr[10]) {
    for (int i = 0; i < 10; i++) {
        int min = i;
        for (int j = i + 1; j < 10; j++) {
            if (arr[j] < arr[min])
            {
                min = j;
            }

        }

        swap(arr[i], arr[min]);
        
    }

}

void swap(int& first, int& second) {
    int temp = first;
    first = second;
    second = temp;
}