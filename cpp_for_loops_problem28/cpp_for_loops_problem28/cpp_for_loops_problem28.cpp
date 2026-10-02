#include <iostream>
using namespace std;
enum enOddOrEven { Odd = 1, Even = 2 };
int ReadNumber()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	return n;
}
enOddOrEven CheckOddOrEven(int n)
{
	if (n % 2 == 0)
		return Even;
	else
		return Odd;
}
int SumOddusingWhileloop(int n)
{
    cout << "Sum odd numbers using a while statement:\n";
    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        if (i % 2 != 0) {
            sum = sum + i;
           
        }
        i++;
    }
    return sum;
}
int SumOddusingForloop(int n)
{
    cout << "Sum odd numbers using a for statement:\n";
    int sum = 0;
    for (int i = 1; i <= n;i++)
    {
		if (CheckOddOrEven(i) == Odd)
		{
            sum += i;
		}
    }
    return sum;
}
int SumOddusinfdoWhileloop(int n)
{
	cout << "Sum odd numbers using a do while statement:\n";
    int sum = 0;
    int i = 0;
    do
    {
        i++;
		if (CheckOddOrEven(i) == Odd)
		{
			sum += i;
		}
    }
    while (i < n);
    return sum;
}
    int main()
    {
		int n = ReadNumber();
		cout << SumOddusingWhileloop(n) << endl;
		cout << SumOddusingForloop(n) << endl;
		cout << SumOddusinfdoWhileloop(n) << endl;

    }
    