

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
  
void diaCircleArea() {
	float Pi = 3.14;
	float D;
	cout << "Please enter the diameter of your circle : \n";
	cin >> D;
	int Area = ceil(((Pi * (pow(D, 2)))) / 4);
	cout << "The area of your circle is " << Area << endl;

}




int main()
{
	
	diaCircleArea();
	diaCircleArea();
	diaCircleArea();
	diaCircleArea();
	diaCircleArea();

	return 0;
}

