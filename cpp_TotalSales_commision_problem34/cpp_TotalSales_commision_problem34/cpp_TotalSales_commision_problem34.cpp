#include <iostream>
using namespace std;
int main()
{
	float Total_sales, commision;
	cout << "Please enter Total sales : \n";
	cin >> Total_sales;
	if (Total_sales == 1000000)
	{
		commision = 0.01 * Total_sales;
		cout << "*****************\n";
		cout << commision << endl;
	}
	else if (500000 <= Total_sales < 1000000)
	{
		commision = 0.02 * Total_sales;
		cout << "*****************\n";
		cout << commision << endl;
	}
	else if (100000 <= Total_sales < 500000)
	{
		commision = 0.03 * Total_sales;
		cout << "*****************\n";
		cout << commision << endl;
	}
	else if (50000 <= Total_sales < 100000)
	{
		commision = 0.05 * Total_sales;
		cout << "*****************\n";
		cout << commision << endl;
	}
	else
	{
		commision = 0 * Total_sales;
		cout << "*****************\n";
		cout << commision << endl;
	}
}