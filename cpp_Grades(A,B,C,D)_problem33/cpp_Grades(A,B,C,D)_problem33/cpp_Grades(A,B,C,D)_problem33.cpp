

#include <iostream>
using namespace std;
int main()
{
	int Grade;
	cout << "Please enter your Grade:\n";
	cin >> Grade;
	if (90 <= Grade <= 100)
	{
		cout << "A\n" << endl;
	}
	else if (80 <= Grade < 90)
	{
		cout << "B\n";
	}
	else if (70 <= Grade < 80)
	{
		cout << "C\n";
	}
	else if (60 <= Grade < 70)
	{
		cout << "D\n";
	}
	else if (50 <= Grade < 60)
	{
		cout << "E\n";
	}
	else
	{
		cout << "F\n";
	}
}

