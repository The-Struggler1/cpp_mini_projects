

#include <iostream>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please enter a number: ";
	cin >> Number;
	return Number;
}

void PrintTill10usingwhileloop(int Number)
{
	int i = 0;
	cout << "Range printed using while loop: " << endl;
	while (i <= Number)
	{
		cout << i << endl;
		i++;
	}
}
void PrintTill10usingforloop(int Number)
{
	cout << "Range printed using for loop:" << endl;
	for (int i = 0; i <= Number;i++)
	{
		cout << i << endl;
	}
}
void PrintTill10usingdowhileloop(int Number)
{
	cout << "Range printed using do while loop:" << endl;
	int i = 0;
	do
	{
		cout << i << endl;
		i++;
	} while (i <= Number);
}
	int main()
	{
		int Number = ReadNumber();
		PrintTill10usingwhileloop(Number);
		PrintTill10usingforloop(Number);
		PrintTill10usingdowhileloop(Number);
		return 0;
	}

	
	

	