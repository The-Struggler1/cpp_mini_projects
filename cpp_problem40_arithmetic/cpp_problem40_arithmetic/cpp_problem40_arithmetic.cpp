
#include <iostream>
using namespace std;
float ReadPositiveNumber(string message)
{
	float Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}
float TotalBillafterServiceTax(float TotalBill)
{
	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;
	return TotalBill;
}
int main()
{
	float TotalBill = ReadPositiveNumber("Please enter Total Bill:");
	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Bill after Service Fee and Sales Tax = " << TotalBillafterServiceTax(TotalBill) << endl;
	return 0;
}

