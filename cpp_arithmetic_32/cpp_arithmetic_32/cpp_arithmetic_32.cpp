

#include <iostream>
#include <cmath>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please enter a Number : \n";
	cin >> Number;
	return Number;
}
int ReadPower()
{
	int Power;
	cout << "Please enter Power\n";
	cin >> Power;
	return Power;
}
int PowerofM(int Number, int Power)
{
	int sum = 1;
	for (int i = 1; i <= Power; i++)
	{
		sum = sum * Number;
	}
	return sum;
}


int main()
{
	int num = ReadNumber();           
	int power = ReadPower();          
	int answer = PowerofM(num, power); 
	cout << endl << "The result of the power is : " << answer << endl; 
	return 0;
} 
