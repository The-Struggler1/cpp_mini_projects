
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string Fullname;
	cout <<" Please enter My string :\n\n ";
	getline(cin,Fullname);
	cout <<Fullname<< endl;
	string string1 = "Mohammed Abu-Hadhoud";
	string string2 = "5";
	string string3 = "10";
	cout << "Please enter string 2 : \n";
	cin >> string2;
	cout << "Please enter string3 : \n ";
	cin >> string3;
	cout << "****************************\n";
	string New_string = string2 + string3;
	cout << "The lenght of My string is : " << Fullname.length() << endl;
	cout << "The lenght of String 1 is : " << string1.length() << endl;
	cout << "Charecters at 0 2 4 7 in string 1 are : " << string1[0] << " ," << string1[2] << " ," << string1[4] << " ," << string1[7] << endl;
	cout << "concecating String2 and String3 will result in " << New_string << endl;
	int sum = stoi(string2) + stoi(string3);
	cout << stoi(string2) << " + " << stoi(string3) << " = " << sum << endl;

	

}


