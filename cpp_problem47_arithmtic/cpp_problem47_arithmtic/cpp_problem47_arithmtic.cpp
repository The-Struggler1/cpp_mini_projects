

#include <iostream>
using namespace std;
int main()
{
	cout << "Please enter Loan Amount : \n";
	int Loan_amount;
	cin >> Loan_amount;
	cout << "Please enter Monthly payment: \n";
	int Monthly_payment;
	cin >> Monthly_payment;
	cout << Loan_amount / Monthly_payment << " Months" << endl;


	return 0;
}

