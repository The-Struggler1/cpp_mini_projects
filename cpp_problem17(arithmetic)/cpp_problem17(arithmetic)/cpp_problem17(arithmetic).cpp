

#include <iostream>
using namespace std;
void ReadData(float& Base, float& Height)
{
	cout << "Please enter the Base length of the triangle : \n";
	cin >> Base;
	cout << "Please enter the height of the triangle : \n";
	cin >> Height;
}
float Area(float Base, float Height)
{
	return (Base * Height) / 2;
}
void Display(float Area)
{
	cout << "The area of the triangle is : " << Area << endl;
}
int main()
{
float Base, Height;
ReadData(Base, Height);
Display(Area(Base, Height));
return 0;
}

