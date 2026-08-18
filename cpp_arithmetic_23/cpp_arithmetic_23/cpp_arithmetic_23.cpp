

#include <iostream>
#include <cmath>
using namespace std;
int CircleArea5(int A,int B,int C) {

	float P = (A + B + C) / 2, Pi = 3.14;
	return round(Pi * pow((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))), 2));
}
int main()
{
	int A, B, C;
	cout << "Please enter A : \n";
	cin >> A;
	cout << "Please enter B : \n";
	cin >> B;
	cout << "Please enter C : \n";
	cin >> C;
	cout << "Area is : " << CircleArea5(A,B,C) << endl;




}



