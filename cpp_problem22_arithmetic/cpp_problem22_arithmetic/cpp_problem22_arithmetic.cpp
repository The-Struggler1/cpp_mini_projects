

#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int CircleArea4(float A,float B) {
    
    float Pi = 3.14;

    return floor(Pi * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B)));
}
int main()
{
    float A, B;
    float Pi = 3.14;

    cout << "Please enter Lenght of side A : \n";
    cin >> A;
    cout << "Please enter Lenght of side B : \n";
    cin >> B;
   
    cout << " The Area of Your Circle is : " << CircleArea4(A,B) << endl;


    
        return 0;
}

