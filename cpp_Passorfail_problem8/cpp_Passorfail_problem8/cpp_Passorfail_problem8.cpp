
#include <iostream>
using namespace std;
int main()
{
	int Mark;
	cout << "Please enter Your Mark:\n";
	cin >> Mark;
	if (Mark >= 50)
	{
		cout << "***********************\n";
		cout << "Pass!!\n";
	}
	else
	{
		cout << "***********************\n";
		cout << "Fail\n";
	}
}
