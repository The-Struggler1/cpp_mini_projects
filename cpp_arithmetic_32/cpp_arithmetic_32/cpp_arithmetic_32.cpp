

#include <iostream>
#include <cmath>
using namespace std;
int PowerM(int M, int Number) {

	return round(pow(Number, M));
}
int main()
{
	int Number, M;
	cout << "Please enter a Number : \n";
	cin >> Number;
	cout << "Please enter M : \n";
	cin >> M;
	cout << "Result : " << PowerM(M,Number) << endl;
} 

