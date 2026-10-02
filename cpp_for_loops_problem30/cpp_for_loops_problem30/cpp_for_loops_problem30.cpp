

#include <iostream>
using namespace std;
int ReadPosNum(string Message)
{
	int Num;
	do
	{
		cout << Message << endl;
		cin >> Num;
	} while (Num < 0);
	return Num;
}
int Factorial(int Num)
{
	int N = 1;
	for (int i = Num; i >= 1; i--)
	{
		N = N * i;
	}
	return N;
}
int main()
{
	cout << Factorial(ReadPosNum("Enter a positive number to calculate its factorial: ")) << endl;
	return 0;

}

