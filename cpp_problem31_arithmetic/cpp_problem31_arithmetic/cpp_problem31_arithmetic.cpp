
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int PowerA(int A) {
	return round(pow(A, 2)), round(pow(A, 3)), round(pow(A, 4));
	

}




int main()
{
	int A;

	cout << "Please enter a number :\n";
	cin >> A;
	cout << PowerA(A) << endl;
	
	return 0;
}

