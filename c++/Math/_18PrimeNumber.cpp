#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    int s = sqrt(n);

    for (int i = 2; i <= s; i++) {
        if (n % i == 0)
        {
            return 0;
        }
                
    }
    return 1;

}
    
int main() {

    int num;

    cin >> num;

    cout << isPrime(num);

    return 0;
}