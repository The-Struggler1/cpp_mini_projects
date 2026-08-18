
#include <iostream>
using namespace std;
int main()
{
    int Age;
    cout << "Please enter your Age:\n";
    cin >> Age;
    if (18 <= Age >= 45)
    {
        cout << "******************\n";
        cout << "Valid Age\n";
    }
    else
    {
        cout << "******************\n";
        cout << "Invalid Age\n";
    }
}
