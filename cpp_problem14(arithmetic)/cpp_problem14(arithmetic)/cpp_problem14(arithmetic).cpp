

#include <iostream>
#include "cpp_problem14(arithmetic).h"
#include <string>
using namespace std;

void SwitchNum(int &A,int &B) {

	
	int Temp = A;
	A = B;
	B = Temp;
	cout << "After swap (A) : " << A << endl;
	cout << "After swap (B) : " << B << endl;
};

int main()
{
	int A, B;
	cout << "Please enter the first number : \n";
	cin >> A;
	cout << "Please enter the second number : \n";
	cin >> B;
	cout << A << endl;
	cout << B << endl;
	SwitchNum(A, B);
	cout << "After swap in main : " << " A = " << A << ", B = " << B << endl;
	return 0;
}

