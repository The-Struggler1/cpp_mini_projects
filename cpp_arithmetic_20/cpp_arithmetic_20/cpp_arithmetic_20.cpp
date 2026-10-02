

#include <iostream>
#include <cmath>
using namespace std;
float ReadData()
{
	float side_length;
	cout << "Please enter the square side length : \n";
	cin >> side_length;
	return side_length;
}

float CircleAreainsquare(float side_length) {

	float Pi = 3.14;
	int Area = ceil((Pi * pow(side_length, 2)) / 4);
	return Area;
}
void PrintResults(float Area)
{
	cout << "The area of the circle inscribed in the square is : " << Area << endl;
}
int main()
{

	PrintResults(CircleAreainsquare(ReadData()));
}
