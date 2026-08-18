
#include <iostream>
#include <string>
using namespace std;
struct contact_info {

	string Email, Phone_num, Face_book, Insta_gram;

};
enum Status { Married, Single };
enum Gender { Male };
int main()
{
	contact_info Email;
	contact_info Phone_num;
	contact_info Face_book;
	contact_info Insta_gram;


	string name;
	short age;
	string city;
	string country;
	short monthly_salary;
	string gender;
	Gender Mygender;
	Status Mystatus;
	Mystatus = Status::Married;

	cout << "Please enter your name: \n";
	cin >> name;
	cout << "Please enter your age:\n";
	cin >> age;
	cout << "Please enter your city:\n";
	cin >> city;
	cout << "Please enter your country:\n";
	cin >> country;
	cout << "Please enter your monthly salary:\n";
	cin >> monthly_salary;
	cout << "Please enter your gender (M/F):\n";
	cin >> gender;
	cout << "Enter Your Email please : \n";
	cin >> Email.Email;
	cout << "Enter your phone number : \n";
	cin >> Phone_num.Phone_num;
	cout << "Enter Facebook Page : \n";
	cin >> Face_book.Face_book;
	cout << "Enter Instagram page : \n";
	cin >> Insta_gram.Insta_gram;



	cout << "*************************\n";
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "City: " << city << endl;
	cout << "Country: " << country << endl;
	cout << "Monthly Salary: " << monthly_salary << endl;
	cout << "yearly salary: " << monthly_salary * 12 << endl;
	cout << "Gender: " << gender << endl;
	cout << "Married: " << Status::Married << endl;
	cout << "Email: " <<Email.Email << endl;
	cout << "Phone number:" << Phone_num.Phone_num << endl;
	cout << "Facebook page:" << Face_book.Face_book << endl;
	cout << "Instagram page:" << Insta_gram.Insta_gram << endl;
	cout << "*************************\n";


	short a, b, c;
	cout << "Please enter a number a:\n";
	cin >> a;
	cout << "Please enter a number b:\n";
	cin >> b;
	cout << "Please enter a number c:\n";
	cin >> c;

	cout << a << " +" << "\n";
	cout << b << " +" << "\n";
	cout << c << "\n";
	cout << "-----------------\n";
	cout << a + b + c << endl;
	short	Age;
	cout << "Please enter your age:\n";
	cin >> Age;
	cout << " Your age after 5 years is "<< Age + 5 << endl;






















}

