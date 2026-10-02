

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void ReadTriangleSides(float& A, float& B) {
	cout << "Please enter Lenght of side A : \n";
	cin >> A;
	cout << "Please enter Lenght of side B : \n";
	cin >> B;

}
float CircleArea4(float A,float B) {
    
    float Pi = 3.14;
   float Area= floor(Pi * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B)));
   return Area;
}
void DisplayArea(float Area) {
	cout << " The Area of Your Circle is : " << Area << endl;
}
int main()
{
float A, B;
ReadTriangleSides(A, B);
DisplayArea(CircleArea4(A, B));
}

