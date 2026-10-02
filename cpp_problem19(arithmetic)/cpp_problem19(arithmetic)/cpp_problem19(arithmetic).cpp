

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void ReadData(float& D)
{
	cout << "Please enter the diameter of your circle : \n";
	cin >> D;
}
float diaCircleArea(float D) {
	const float Pi = 3.141592653589;
	float Area = (((Pi * (pow(D, 2)))) / 4);
	return Area;
}
void DisplayData(float Area)
{
	cout << "The area of your circle is : " << Area << endl;
}

int main()
{
	float Pi = 3.14;
	float D;
	ReadData(D);
	DisplayData(diaCircleArea(D));

	return 0;
}

