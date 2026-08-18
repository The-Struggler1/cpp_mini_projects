
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double  CircleArea(int r)  {
	const double Pi = 3.14159;
	return ceil(Pi * pow(r, 2));
}

int main()
{
	int r;
	const double Pi = 3.14159;
	cin >> r;
	cout << "Area of circle is : " << CircleArea(r) << endl;
}