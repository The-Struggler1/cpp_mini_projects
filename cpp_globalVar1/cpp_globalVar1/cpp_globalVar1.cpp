

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int x = 100;
float y = 200.314;

void Myfunction() {
    int x = 12;
    cout << " X inside the procedure is :" << x << endl;
}

int main()
{
    int x = 99;
    cout << "The x in Main is : " << x << endl;
    ::x = 1000;
    cout << "The new x in global is : " << ::x << endl;
    Myfunction();
}

