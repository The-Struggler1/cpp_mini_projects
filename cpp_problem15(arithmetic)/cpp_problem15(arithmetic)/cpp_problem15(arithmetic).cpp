

#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(float& length, float& Width)
{
	cout << "Enter the length: ";
	cin >> length;
	cout << "Enter the width: ";
	cin >> Width;
}
float CalculateArea(float length, float Width)
{
	return length * Width;
}
void  DisplayArea(float area)
{
	cout << "The area is: " << area << endl;
}

int main()
{
   
    float length, Width;
	ReadNumbers(length, Width);
	DisplayArea(CalculateArea(length, Width));
    return 0;
}

