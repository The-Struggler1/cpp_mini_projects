

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void Myprocedure() {
	int number1, number2;
	cout << "Please enter number1 : \n";
	cin >> number1;
	cout << "Please enter number2 : \n";
	cin >> number2;
	cout << "**********************\n";
	cout << number1 + number2 << endl;

};
    int  Myfunction() {
		int number1;
		int number2;
		cout << "Please enter number1 : \n";
		cin >> number1;
		cout << "Please enter number2 : \n";
		cin >> number2;
		return number1 + number2;
};

int main()
{
	Myprocedure();
	int Result;
	Result = Myfunction();
	cout << Result << endl;

}

