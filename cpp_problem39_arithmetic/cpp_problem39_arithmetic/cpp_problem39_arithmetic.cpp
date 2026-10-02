

#include <iostream>
using namespace std;
float ReadPositiveNUmber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
float CalculateRemainder(float TotalBill, float TotalCashPaid)
{
	return TotalCashPaid - TotalBill;
}
int main()
{
	float Total_bill = ReadPositiveNUmber("Please Enter Total Bill Amount:");
	float Cash_Paid = ReadPositiveNUmber("Please Enter the Cash Paid:");

	cout << endl;
	cout << "Total bill amount :" << Total_bill << endl;
	cout << "Cash Paid amount :" << Cash_Paid << endl;

	cout << "**********************\n";
	cout << "Remainder=" << CalculateRemainder(Total_bill, Cash_Paid) << endl;

}

