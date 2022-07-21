#include <iostream>
using namespace std;

void linearSearch(int arr[10], int key) {
    for (int i = 0; i < 10; i++) {
        if (arr[i] == key)
        {
            cout << "arr[" << i << "] = " << key;
            break;
        }
        
    }
}

int main() {

    int arr[10] = {10, 20, 44, 55, 33, 22, 99, 88, 99, 100};

    linearSearch(arr, 20);

    return 0;
}