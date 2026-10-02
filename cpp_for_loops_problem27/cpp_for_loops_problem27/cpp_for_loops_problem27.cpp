#include <iostream>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please enter your Number:" << endl;
	cin >> Number;
	return Number;
}
void PrintFromNto1usingwhileloop(int Number)
{
	cout << "Printing from " << Number << " till 1 using while loop " << endl;
	int i = Number + 1;
		while (i > 1)
		{
			cout << i << endl;
			i--;
		}
}
void PrintFromNto1usingforloop(int Number)
{
	cout << "Printing from " << Number << " till 1 using for loop" << endl;
	for (int i = Number + 1; i > 1; i--)
	{
		cout << i << endl;
	}
}
void PrintFromNto1usingdowhileloop(int Number)
{
	cout << "Printing from " << Number << " till 1 using do while loop" << endl;
	int i = Number + 1;
	do
	{
		cout << i << endl;
		i--;
	} while (i >= 1);
}
int main()
{
	int Number = ReadNumber();
	PrintFromNto1usingwhileloop(Number);
	PrintFromNto1usingforloop(Number);
	PrintFromNto1usingdowhileloop(Number);


	return 0;
}
