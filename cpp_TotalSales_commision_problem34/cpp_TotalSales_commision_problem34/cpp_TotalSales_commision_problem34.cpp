#include <iostream>
using namespace std;
int ReadTotalSales()
{
	float Total_sales;
	cout << "Please enter Total sales : \n";
	cin >> Total_sales;
	return Total_sales;
}
float GetCommisionPercentage(float Total_sales)
{
	if (Total_sales == 1000000)
	{
		return 0.01;
	}
	else if (500000 <= Total_sales && Total_sales < 1000000)
	{
		return 0.02;
	}
	else if (100000 <= Total_sales && Total_sales < 500000)
	{
		return 0.03;
	}
	else if (50000 <= Total_sales && Total_sales < 100000)
	{
		return 0.05;
	}
	else
	{
		return 0;
	}
}
float CalculateCommision(float Total_sales)
{
	return GetCommisionPercentage(Total_sales) * Total_sales;
}
int main()
{
	float Total_sales = ReadTotalSales();
	cout << endl << "Commiion Percentage : " << GetCommisionPercentage(Total_sales) * 100 << "%" << endl;
	cout << "Calculated Commission : " << CalculateCommision(Total_sales) << endl;
}