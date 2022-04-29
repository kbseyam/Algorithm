#include <iostream>
using namespace std;

int main() {

    int numbers[] = {80, 510, 547, 2048, 47, 5, 1024, 12, 6, 8};

    int max = numbers[0] , min = numbers[0];

    for (auto &&i : numbers)
    {
        if (max < i)
        {
            max = i;
        }

        if (min > i)
        {
            min = i;
        }
                
    }

    cout << "max: " << max << endl << "min: " << min;
    

    return 0;
}