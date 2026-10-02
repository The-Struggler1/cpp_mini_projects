#include <iostream>
#include <cmath>
using namespace std;
void ReadData(double& Diameter, double& Side_Length)
{
	cout << "Please enter diameter : \n";
	cin >> Diameter;
	cout << "Please enter Area : \n";
	cin >> Side_Length;
}
float CalculateArea(double Diameter, double Side_Length)
{
	return Side_Length * (sqrt(pow(Diameter, 2) - pow(Side_Length, 2)));
}
void PrintResults(double Area)
{
	cout << "Area of the triangle is : " << Area << endl;
}
int main()
{
	double Diameter, Side_Length;
	ReadData(Diameter, Side_Length);
	PrintResults(CalculateArea(Diameter, Side_Length));
	return 0;
}
