

#include <iostream>
using namespace std;
struct stPiggyBankContent
{
	int penny, nickel, dime, quarter, dollar;
};
stPiggyBankContent getPiggyBankContent()
{
	stPiggyBankContent piggyBank;
	cout << "Please enter the amount of pennies:\n";
	cin >> piggyBank.penny;
	cout << "Please enter the amount of nickles:\n";
	cin >> piggyBank.nickel;
	cout << "Please enter the amount of dimes: \n";
	cin >> piggyBank.dime;
	cout << "Please enter the amount of quarters: \n";
	cin >> piggyBank.quarter;
	cout << "Please enter the amount of dollars: \n";
	cin >> piggyBank.dollar;
	return piggyBank;
}
int CalculateTotalPennies(stPiggyBankContent piggyBank)
{
	return piggyBank.penny + piggyBank.nickel * 5 + piggyBank.dime * 10 + piggyBank.quarter * 25 + piggyBank.dollar * 100;
}
int main()
{
	int  totalPennies = CalculateTotalPennies(getPiggyBankContent());
	cout << endl << "Total Pennies =" << totalPennies << endl;
	cout << endl << "Total Dollars =" << (float)totalPennies / 100 << endl;
		return 0;
}

