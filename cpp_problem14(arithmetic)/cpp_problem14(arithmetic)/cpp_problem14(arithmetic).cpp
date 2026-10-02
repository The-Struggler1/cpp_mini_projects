

#include <iostream>
#include "cpp_problem14(arithmetic).h"
#include <string>
using namespace std;
void ReadNumbers(int& A, int& B)
{
	cout << "Please enter the first number : \n";
	cin >> A;
	cout << "Please enter the second number : \n";
	cin >> B;
}
void SwitchNum(int &A,int &B) {

	
	int Temp = A;
	A = B;
	B = Temp;
};
void DisplayNumbers(int A, int B)
{
	cout << "After swap in main : " << " A = " << A << ", B = " << B << endl;
}
int main()
{
	int A, B;
	ReadNumbers(A, B);
	DisplayNumbers(A, B);
	SwitchNum(A, B);
	DisplayNumbers(A, B);
}

