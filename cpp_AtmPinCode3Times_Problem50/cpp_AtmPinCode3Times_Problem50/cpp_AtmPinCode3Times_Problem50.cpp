
#include <iostream>
using namespace std;
string ReadPinCode()
{
    string PinCode;
    cout << "Please enter your Pin Code\n";
    cin >> PinCode;
    return PinCode;
}
bool Login()
{
    string PinCode;
    int Counter = 3;
    do
    {
        Counter--;
        PinCode = ReadPinCode();

        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            system("color 4F"); 
            cout << "\nWrong PIN, you have " << Counter << " Tries Left " << endl;
        }

    } while (Counter >= 1 && PinCode != "1234");


    return 0;
}
 int main()
{
     if (Login())
     {
         system("color 2F");

         cout << "\nYour Accounts Balance is " << 7500 << endl;
     }
     else
     {
         cout << "\nYour Card is blocked, Call the bank for help." << endl;

     }
     return 0;
       
}

