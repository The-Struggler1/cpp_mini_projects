

#include <iostream>
#include <cmath>
using namespace std;


void CircleAreainsquare() {
	cout << "Please enter A : \n";
	int A;
	cin >> A;
	float Pi = 3.14;
	int Area = ceil((Pi * pow(A, 2)) / 4);
	cout << "Area of circle is : " << Area << endl;
}





int main()
{
	CircleAreainsquare();
}
