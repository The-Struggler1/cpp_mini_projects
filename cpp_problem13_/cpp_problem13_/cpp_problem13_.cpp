#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(int& num1, int& num2, int& num3)
{
	cout << "please enter Number 1: " << endl;
	cin >> num1;
	cout << "please enter Number 2: " << endl;
	cin >> num2;
	cout << "please enter Number 3: " << endl;
	cin >> num3;
}
int Maxof3Numbers(int num1, int num2, int num3)
{
	if (num1 > num2 && num1 > num3)
	{
		return num1;
	}
	else if (num2 > num1 && num2 > num3)
	{
		return num2;
	}
	else
	{
		return num3;
	}
}
void PrintResults(int Max)
{
	cout << "The maximum number is: " << Max << endl;
}
int main()
{
	int num1, num2, num3;
	ReadNumbers(num1, num2, num3);
	PrintResults(Maxof3Numbers(num1, num2, num3));
}

