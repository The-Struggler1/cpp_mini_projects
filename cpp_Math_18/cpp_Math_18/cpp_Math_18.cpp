
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void ReadData(float& r) 
{
	cout << "Please enter the radius of the circle: ";
	cin >> r;
}
double  CircleArea(float r)  {
	const double Pi = 3.14159;
	return ceil(Pi * pow(r, 2));
}
void PrintData(double area)
{
	cout << "The area of the circle is: " << area << endl;
}
int main()
{
	float r;
	const double Pi = 3.14159;
	ReadData(r);
	PrintData(CircleArea(r));
	return 0;
	}
	