#include <iostream>
using namespace std;

void print1ToN(int n);
void printNTO1(int n);

int main() {

    //print1ToN(10);
    printNTO1(10);

    return 0;
}

void print1ToN(int n) {
    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }
}

void printNTO1(int n) {
    for (int i = n; i >= 1; i--) {
        cout << i << endl;
    }
}