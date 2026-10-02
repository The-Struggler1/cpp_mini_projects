
#include <iostream>
#include <string>
using namespace std;
int ReadAge()
{
    int Age;
    cout << "please enter your Age:\n";
	cin >> Age;
    return Age;
}
bool ValidateNumberinRamge(int Age, int min, int max)
{
return (Age >= min && Age <= max);
}
int ReadUntilAgeBetween(int min, int max)
{
    int Age = 0;
	do
	{
		Age = ReadAge();
	} while (!ValidateNumberinRamge(Age, min, max));
	return Age;
}
void PrintAge(int Age)
{
	cout << "Your Age is: " << Age << endl;
}
int main()
{
	PrintAge(ReadUntilAgeBetween(18,45));
}
