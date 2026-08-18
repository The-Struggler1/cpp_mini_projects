

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int Age;
    bool Drivers_License;
    cout << "Please enter your Age : \n";
    cin >> Age;
    cout << "Do You Have a drivers license? (Enter 1 for yes and 0 for no):\n";
    cin >> Drivers_License;
    if (Age > 21 && Drivers_License) {
        cout << "*************************\n";
        cout << "Hired!\n";
    }
    else {
        cout << "*************************\n";
        cout << "Rejected\n";
    }
}