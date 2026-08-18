

#include <iostream>
#include <string>
using namespace std;

int RecAreaFunction(int length, int width) {
    
    return length * width;
};





int main()
{
   
    int length, width;
    cin >> length;
    cin >> width;
    cout << RecAreaFunction(length, width) << endl;
    return 0;
}

