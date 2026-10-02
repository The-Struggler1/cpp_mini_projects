

#include <iostream>
using namespace std;
void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
	cout << "Please enter the first number : \n";
	cin >> Num1;
	cout << "Please enter the second number : \n";
	cin >> Num2;
	cout << "Please enter the third number : \n";
	cin >> Num3;
}
int SumOfNumbers(int Num1, int Num2, int Num3)
{
	return Num1 + Num2 + Num3;
}
void PrintResults(int Sum)
{
	cout << "The Sum of the three numbers is : " << Sum << endl;
}
int main()
{
	int  Num1, Num2, Num3;
	ReadNumbers(Num1, Num2, Num3);
	int Sum = SumOfNumbers(Num1, Num2, Num3);
	PrintResults(Sum);
	return 0;
}

