

#include <iostream>
using namespace std;
float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
float MonthlyInstallment(float LoanAmount, float NumberOfMonths)
{
	return (float)LoanAmount / NumberOfMonths;
}
int main()
{
	float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount:");
	float NumberOfMonths = ReadPositiveNumber("How Many Month to finish the loan?");
	cout << "\nMonthly Installment = " << MonthlyInstallment(LoanAmount, NumberOfMonths);
	cout << endl;
	return 0;
}

