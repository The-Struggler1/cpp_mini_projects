
#include <iostream>
using namespace std;
int main()
{
	int Number1, Number2;
	char Operation_type;
	cout << "Please enter the first number :\n";
	cin >> Number1;
	cout << "Please enter the second number :\n";
	cin >> Number2;
	cout << "Please enter operation type :\n";
	cin >> Operation_type;
	cout << "----------------------\n\n";
	switch (Operation_type)
	{
	case '+':
		cout << Number1 + Number2 << endl;
		break;
	case '-':
		cout << Number1 - Number2 << endl;
		break;
	case '*':
		cout << Number1 * Number2 << endl;
		break;
	case '/':
		cout << Number1 / Number2 << endl;
		break;
	default:
		cout << "unknown operator" << endl;
	}
}