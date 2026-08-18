

#include <iostream>
using namespace std;

int main()
{
	float penny, nickel, dime, quarter, dollar;
	
	

	cout << "Please enter the amount of pennies:\n";
	cin >> penny;
	cout << "Please enter the amount of nickles:\n";
	cin >> nickel;
	cout << "Please enter the amount of dimes: \n";
	cin >> dime;
	cout << "Please enter the amount of quarters: \n";
	cin >> quarter;
	cout << "Please enter the amount of dollars: \n";
	cin >> dollar;
	
	float Total_pennies = penny + nickel * 5 + dime * 10 + quarter * 25 + dollar * 100;
	float Total_dollars = (Total_pennies) / 100;

	cout << Total_pennies << endl;

	cout << Total_dollars << endl;






		return 0;
}

