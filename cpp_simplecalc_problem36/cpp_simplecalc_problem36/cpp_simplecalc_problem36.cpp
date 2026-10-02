
#include <iostream>
using namespace std;
enum enOperationType {Add = '+', Subtract = '-', Multiply = '*', Division ='/' };
float ReadNumber(string Message)
{
	float number = 0;
	cout << Message << endl;
	cin >> number;
	return number;
}
enOperationType ReadOpType()
{
	char OPType = '+';
	cout << "Please enter Operation Type :\n";
	cin >> OPType;
	return (enOperationType)OPType;
}
float Calculate(float Number1, float Number2, enOperationType OPType)
{
	switch (OPType)
	{
	case enOperationType::Add:
		return Number1 + Number2;
	case enOperationType::Subtract:
		return Number1 - Number2;
	case enOperationType::Multiply:
		return	Number1 * Number2;
	case enOperationType::Division:
		return Number1 / Number2;
	default:
		cout << "unknown operator" << endl;
	}
}
int main()
{
	float Number1 = ReadNumber("Please enter the first number:");
	float Number2 = ReadNumber("Please enter the second number:");
	enOperationType OPType = ReadOpType();
	cout << endl << "Result is! : " << Calculate(Number1, Number2, OPType) << endl;

}