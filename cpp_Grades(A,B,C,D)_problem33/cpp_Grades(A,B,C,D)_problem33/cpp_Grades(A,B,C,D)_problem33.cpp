#include <iostream>
using namespace std;


int ReadNumberInRange(int From, int To)
{
	int Grade;
	do
	{
		cout << "Please enter your Grade:\n";
		cin >> Grade;
	} while (Grade < From || Grade > To);
	return Grade;
}
char getGradeLetter(int Grade)
{
	if (Grade >= 90)
	{
		return 'A';
	}
	else if (Grade >= 80)
	{
		return 'B';
	}
	else if (Grade >= 70)
	{
		return 'C';
	}
	else if (Grade >= 60)
	{
		return 'D';
	}
	else if (Grade >= 50)
	{
		return 'E';
	}
	else
	{
		return 'F';
	}
}

int main()
{
	int grade = ReadNumberInRange(0, 100);
	char letter = getGradeLetter(grade);
	cout << endl << "Your Grade is! : " << letter << endl;
	return 0;
}
	
