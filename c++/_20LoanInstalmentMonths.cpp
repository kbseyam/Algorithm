#include <iostream>
using namespace std;

int main() {

    float loanAmount;
    float monthlyPayment;

    cout << "LoanAmount: ";
    cin >> loanAmount;
    cout << "MonthlyPayment: ";
    cin >> monthlyPayment;

    float totalMonth = loanAmount / monthlyPayment;

    printf("%.2f Months", totalMonth);

    return 0;
}