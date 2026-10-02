

#include <iostream>
#include <cmath>
using namespace std;
struct stInfo {
	int Age;
	bool Drivers_License;
	bool Has_Reccomendation;
};
stInfo ReadInfo() {
	stInfo info;
	cout << "Please enter your Age : \n";
	cin >> info.Age;
	cout << "Do You Have a drivers license? (Enter 1 for yes and 0 for no):\n";
	cin >> info.Drivers_License;
	cout << "Do You Have a reccomendation? (Enter 1 for yes and 0 for no):\n";
	cin >> info.Has_Reccomendation;
	return info;
}
bool isAccepted(stInfo info)
{
	if (bool Has_Reccomendation = true)
		return true;
	else
	return (info.Age >= 18 && info.Drivers_License == true);
 }
void PrintResult(stInfo info)
{
	if(isAccepted(info))
		cout << "\n Hired "<< endl;
	else
		cout << "\n Rejected " << endl;

}
int main()
{
	PrintResult(ReadInfo());
}