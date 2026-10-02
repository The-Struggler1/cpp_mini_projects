

#include <iostream>
#include <string>
using namespace std;
int ReadNumber()
{
	int Num;
	cout << "Enter a number: ";
	cin >> Num;
	return Num;
}
float Half(int Num)
{
	return (float)Num / 2;
}
void PrintHalf(int Num)
{
	string result = "Half of the number " + to_string(Num) + " is " + to_string(Half(Num));
	cout << result << endl;
}
int main()
{
	PrintHalf(ReadNumber());
	return 0;
}

