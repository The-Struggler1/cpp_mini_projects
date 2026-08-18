
#include <iostream>
#include <string>
using namespace std;


int RecareaFunction(int A, int D) {    return A * sqrt(pow(D, 2) - pow(A, 2));
}

 int main()
{
    int D, A;
    cin >> A;
    cin >> D;
    cout << RecareaFunction(A,D) << endl;
    

    return 0;
}

