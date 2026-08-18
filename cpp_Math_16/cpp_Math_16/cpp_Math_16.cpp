#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double D, A;
	cout << "Please enter diameter : \n";
	cin >> D;
	cout << "Please enter Area : \n";
	cin >> A;
	cout << " The Area = " << A * (sqrt(pow(D, 2) - pow(A, 2))) << endl;
	return 0;
}
