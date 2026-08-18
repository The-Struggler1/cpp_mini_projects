

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int CircleArea3(int L) {
	
	float Pi = 3.14;

	return ceil((pow(L, 2) / (4 * Pi)));
};

int main() {
	int L;
	cin >> L;

	cout << CircleArea3( L) << endl;
	return 0;
}

