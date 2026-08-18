

#include <iostream>
using namespace std;

int main()
{
    int Bio, Chem, Math;
    float Avg;
    cout << "Please enter the BioLogy Mark:\n";
    cin >> Bio;
    cout << "Please enter the Chemistry Mark:\n";
    cin >> Chem;
    cout << "Please enter the Math Mark:\n";
    cin >> Math;
    Avg = (Bio + Chem + Math) / 3;

    if (Avg >= 50)
    {
        cout << "***************\n";
        cout << "Pass!!\n";
    }
    else
    {
        cout << "***************\n";
        cout << "Fail\n";
    }
}