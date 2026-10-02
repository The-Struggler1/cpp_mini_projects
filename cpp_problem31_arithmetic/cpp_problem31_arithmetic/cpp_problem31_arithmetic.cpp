
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int ReadNumber() {
	int A;
	cout << "Please enter a number :\n";
	cin >> A;
	return A;
}
void PowerAof2_3_4(int A) {

	int a, b, c;
	a = pow(A, 2);
	b = pow(A, 3);
	c = pow(A, 4);
	cout << "The power of " << A << " to 2 is : " << a << endl;
	cout << "The power of " << A << " to 3 is : " << b << endl;
	cout << "The power of " << A << " to 4 is : " << c << endl;
}

int main()
{
	PowerAof2_3_4(ReadNumber());
	
	return 0;
}

