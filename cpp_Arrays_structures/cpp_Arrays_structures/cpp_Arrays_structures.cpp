
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
struct strInfo {
    string Firstname;
    string lastname;
    int Age;
    string PhoneNumber;
   
};

void ReadInfo(strInfo &Info)  {
    cout << "Please enter Your First Name : \n";
    cin >> Info.Firstname;
    cout << "Please enter your Last Name :\n";
    cin >> Info.lastname;
    cout << "Please enter your Age :\n";
    cin >> Info.Age;
    cout << "Please enter Your Phone Number :\n";
    cin >> Info.PhoneNumber;
    
};

void PrintInfo(strInfo &Info ){
    cout << "***********************\n";
    cout << "First Name :" << Info.Firstname << endl;
    cout << "Last Name :" << Info.lastname << endl;
    cout << "Age :" << Info.Age << endl;
    cout << "Phone Number :" << Info.PhoneNumber << endl;
    cout << "***********************\n";

}
void ReadPersonInfo(strInfo Persons[100], int& Num_of_cards){
    cout << "How many cards do you want to enter\n";
    cin >> Num_of_cards;
    for (int i = 0; i <= Num_of_cards - 1;i++){
        ReadInfo(Persons[i]);
    }
    
}
void PrintPersonInfo(strInfo Persons[100], int&Num_of_cards){
    for (int i = 0; i <= Num_of_cards - 1; i++){
        PrintInfo(Persons[i]);
    }

}
int main()
{
    strInfo Persons[100];
    int Num_of_cards = 1;
   
    ReadPersonInfo(Persons, Num_of_cards);
    PrintPersonInfo(Persons, Num_of_cards);



    return 0;
}

