
#include <iostream>
using namespace std;
int main()
{
	int Atm_Pin_code = 1234, User_Balance = 7500;
		cout << "Please enter Atm Pin code:\n";
	cin >> Atm_Pin_code;
	if (Atm_Pin_code == 1234)
	{
		cout << "*****************\n";
		cout << User_Balance << endl;
	}
	else
	{
		cout << "*****************\n";
		cout << "Wrong Pin\n";
	}
}

