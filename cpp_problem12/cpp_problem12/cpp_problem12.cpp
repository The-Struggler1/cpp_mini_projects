
#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(int& num1, int& num2)
{
	cout << "please enter Number 1: " << endl;
	cin >> num1;
	cout << "please enter Number 2: " << endl;
	cin >> num2;
}
int Maxof2Numbes(int num1, int num2)
{
	if (num1 > num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}
void PrintResults(int Max)
{
	cout << "The maximum number is: " << Max << endl;
}
int main()
{
	int num1, num2;
	ReadNumbers(num1, num2);
	PrintResults(Maxof2Numbes(num1, num2));
}

