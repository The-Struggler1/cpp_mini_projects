

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
float ReadData()
{
	float length;
	cout << "Enter the length of the circle: ";
	cin >> length;
	return length;
}
float CircleArea(float Length)
{
	float Pi = 3.14;
	float Area = ceil((pow(Length, 2) / (4 * Pi)));
	return Area;
};
void DisplayData(float Area)
{
	cout << "The area of the circle is: " << Area << endl;
}

int main() {
	DisplayData(CircleArea(ReadData()));
}

