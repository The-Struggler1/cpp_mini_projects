

#include <iostream>
using namespace std;
enum Light {Red, Green, Yellow};

void PrintLight(Light l ) {
	switch (l) {
	case Light::Red:
		cout << "RED" << endl;
		break;
	case Light::Green:
		cout << "GREEN" << endl;
		break;
	case Light::Yellow:
		cout << "YELLOW" << endl;
		break;
	default:
		cout << "Wrong Number!" << endl;
	}
}
Light NextLight(Light current) {
	if (current == Red) {
		return Green;
	}
	else if (current == Green) {
		return Yellow;
	}
	 else   {
		return Red;
		}
	}
Light advance(Light current) {
	Light next = NextLight(current);
	PrintLight(next);
	return next;
}


int main()
{
	Light current = Light::Red;
	cout << "Start: ";
	PrintLight(current);
	for (int i = 0; i < 100;i++) {
		current = advance(current);
	}
	return 0;
}