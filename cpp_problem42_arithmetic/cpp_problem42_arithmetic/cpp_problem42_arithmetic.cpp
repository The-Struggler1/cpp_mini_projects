
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void Seconds_to_other() {
	int days, hours, mins,  seconds;
	cout << "Input amount of days:\n";
	cin >> days;
	cout << "Input amount of hours:\n";
	cin >> hours;
	cout << "Input amount of mins:\n";
	cin >> mins;
	cout << "Input amount of seconds\n";
	cin >> seconds;

	float duration_in_seconds = days * 24 * pow(60, 2) + hours * pow(60, 2) + mins * 60 + seconds;

	cout << round(duration_in_seconds);



};
int main()
{
	

	Seconds_to_other();

	return 0;
}



