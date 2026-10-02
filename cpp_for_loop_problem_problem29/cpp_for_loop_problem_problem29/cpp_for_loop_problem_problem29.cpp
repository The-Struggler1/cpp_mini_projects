#include <iostream>
using namespace std;
enum enOddorEven {
	Odd = 1,
	Even = 2
};
int ReadNumber()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	return n;
}
enOddorEven checkOddorEven(int n)
{
	if (n % 2 == 0) {
		return Even;
	}
	else {
		return Odd;
	}
}
int SumEvenUsingwhileLoop(int n)
{
	int sum = 0;
	int i = 1;
	cout << "Even numbers from 1 to " << n << " are using while loop: ";
	while (i <= n)
	{
		i++;
		if (checkOddorEven(i) == Even) {
			sum += i;
		}

	}

    return sum;
}
int SumEvenUsingforLoop(int n)
{
	int sum = 0;
	cout << "Even numbers from 1 to " << n << " are using for loop: ";
	for (int i = 1; i <= n; i++)
	{
		if (checkOddorEven(i) == Even) {
			sum += i;
		}
	}
	return sum;
}
int SumEvenUsingdoWhileLoop(int n)
{
	int sum = 0;
	int i = 0;
	cout << "Even numbers from 1 to " << n << " are using do while loop: ";
	do
	{
		if (checkOddorEven(i) == Even) {
			sum += i;
		}
		i++;
	} while (i <= n);
	return sum;
}
int main() {
	int n = ReadNumber();
    cout << SumEvenUsingwhileLoop(n) << endl;
	cout << SumEvenUsingforLoop(n) << endl;
	cout << SumEvenUsingdoWhileLoop(n) << endl;

    return 0;
}


