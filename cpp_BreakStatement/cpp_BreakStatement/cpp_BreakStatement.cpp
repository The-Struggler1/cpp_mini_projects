

#include <iostream>
using namespace std;
void FindNumber()
{
    int arr[10] = { 10,20,30,40,50,60,70,80,90,100 }, Number;
   cout << "PLease Enter a number:" << endl;
   cin >> Number;
   int i;
    for (i = 0;i<10;i++)
    {
        if (arr[i] ==Number)
        {
            cout << "The position of the number is :" << i << endl;
            break;
        }
       
    }
    if (i==10)
    {
        cout << "  Number not found " << endl;
       
    }

    
}
int main()
{
    
    FindNumber();
}

