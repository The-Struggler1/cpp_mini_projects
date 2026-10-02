

#include <iostream>
using namespace std;
struct stinfo
{
	string FirstName;
	string LastName;
};
stinfo GetInfo()
{
	stinfo info;
	cout << "Enter First Name: ";
	cin >> info.FirstName;
	cout << "Enter Last Name: ";
	cin >> info.LastName;
	return info;
}
string GetFullName(stinfo info)
{
	return info.FirstName + " " + info.LastName;
}
void PrintFullName(string fullName)
{
	cout << "Full Name: " << fullName << endl;
}
int main()
{
	PrintFullName(GetFullName(GetInfo()));
}

