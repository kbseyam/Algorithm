#include <iostream>
using namespace std;

bool isPrime(int num) {
    for (int i = 2; i <= (num / 2); i++) {
        if (num % i == 0)
        {
            return 0;
        }        
    }

    return 1;
}

int main() {

    int num;
    cout << "num: ";
    cin >> num;

    cout << isPrime(num);

    return 0;
}