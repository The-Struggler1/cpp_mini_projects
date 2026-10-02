

#include <iostream>
using namespace std;
enum enNumberType { Odd = 1, Even = 2 };
int ReadNumber()
{
    int Number;
    cout << "Please enter a number: ";
    cin >> Number;
    return Number;
}
enNumberType CheckNumberType(int Number)
{
	if (Number % 2 == 0)
		return Even;
	else
		return Odd;
}
void PrintNumberType(enNumberType NumberType)
{
	if (NumberType == Even)
		cout << "The number is Even.\n";
	else
		cout << "The number is Odd.\n";
}
int main()
{
	PrintNumberType(CheckNumberType(ReadNumber()));
	return 0;
}

