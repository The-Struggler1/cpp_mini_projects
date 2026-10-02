
#include <iostream>
#include <string>
using namespace std;

struct strInfo {
    string Firstname;
    string Lastname;
    string Age;
    string Phonenumber;
    enum Gender { M, F };
    char gender;
    enum Socialstatus { Married, Single };
    string socialstatus;
};
void ReadArrayData(int Arr1[100], int& Length)
{
    cout << "How Many Cards do you want to enter? 1 to 100?\n";
    cin >> Length;

    for (int i = 0; i <= Length - 1; i++)
    {

        cout << "Please enter Number " << i + 1 << endl;
        cin >> Arr1[i];

    }

}
void PrintArrayData(int Arr1[100], int Length)
{
    cout << "\nArray Data...\n";

    for (int i = 0; i <= Length - 1; i++)
    {

        cout << "Number [" << i + 1 << "] : " << Arr1[i] << endl;

    }

}

void readinfo(strInfo& Info) {
    cout << "Please enter your First name: \n";
    cin >> Info.Firstname;
    cout << "Please enter your Last name : \n";
    cin >> Info.Lastname;
    cout << "Please enter your Age : \n";
    cin >> Info.Age;
    cout << "Please enter your Phone number : \n";
    cin >> Info.Phonenumber;
    cout << "Please enter your Gender (M/F) : \n";
    cin >> Info.gender;
    cout << "Please enter your social status (Married/Single)\n";
    cin >> Info.socialstatus;
}

void PrintInfo(strInfo& Info) {
    cout << "**************************\n\n";
    cout << "First Name: " << Info.Firstname << endl;
    cout << "Last Name: " << Info.Lastname << endl;
    cout << "Age :" << Info.Age << endl;
    cout << "Phone number :" << Info.Phonenumber << endl;
    cout << "Gender :" << Info.gender << endl;
    cout << "Social status :" << Info.socialstatus << endl;
    cout << "**************************\n\n";

}

int main()
{
    int Arr1[100], Length = 0;
    ReadArrayData(Arr1, Length);
    PrintArrayData(Arr1, Length);
    strInfo Person1Info;
    readinfo(Person1Info);
    PrintInfo(Person1Info);
    



}

