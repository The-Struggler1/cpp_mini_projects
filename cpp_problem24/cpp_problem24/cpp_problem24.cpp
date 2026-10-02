

#include <iostream>
#include <string>
using namespace std;
int ReadAge()
{
    int Age;
    cout << "Please enter your Age:\n";
    cin >> Age;
    return Age;
}
bool ValidateNumberinRange(int Age, int min, int max)
{
	return (Age >= min && Age <= max);
}
void PrintAge(int Age)
{
	if (ValidateNumberinRange(Age, 18, 45))
	{
		cout << "Your Age is: " << Age << endl;
	}
	else
	{
		cout << "Invalid Age entered" << endl;
	}
}
int main()
{
	PrintAge(ReadAge());
}

