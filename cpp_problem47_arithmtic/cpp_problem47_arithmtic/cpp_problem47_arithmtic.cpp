

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
float TotalMonths(float LoanAmount, float MonthlyInstallments)
{
	return (float)LoanAmount / MonthlyInstallments;
}
int main()
{
	float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount:");
	float MonthlyInstallments = ReadPositiveNumber("Please Enter Monthly Installment amount:");
	cout << "\nTotal Months to pay = " << TotalMonths(LoanAmount, MonthlyInstallments);
	cout << endl;
	return 0;
}

