

#include <iostream>
using namespace std;
int main()
{
	cout << "Please enter Loan amount : \n";
	int Loan_amount;
	cin >> Loan_amount;
	cout << "Months to settle the loan : \n";
	int Months_loan;
	cin >> Months_loan;
	cout << Loan_amount / Months_loan;
}

