

#include <iostream>
#include <cmath>
using namespace std;
void ReadTriangleSidesLength(float& A, float& B, float& C) {
	cout << "Please enter A : \n";
	cin >> A;
	cout << "Please enter B : \n";
	cin >> B;
	cout << "Please enter C : \n";
	cin >> C;
}
float CircleAreaAribtraryTriangle(float A, float B, float C) {

	float P = (A + B + C) / 2, Pi = 3.14;\
	float Area = (Pi * pow((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))), 2));
	return Area;
}
void DisplayArea(float Area) {
	cout << "Area is : " << Area << endl;
}

int main()
{
	float A, B, C;
	ReadTriangleSidesLength(A, B, C);
	DisplayArea(CircleAreaAribtraryTriangle(A, B, C));


}



