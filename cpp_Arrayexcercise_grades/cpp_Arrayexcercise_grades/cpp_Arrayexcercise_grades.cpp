

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void ReadGradeInfo(int x[3]) {
    cout << "Please enter Biology Grade : \n";
    cin >> x[0];
    cout << "Please enter Chemistry Grade : \n";
    cin >> x[1];
    cout << "Please enter Math grade : \n";
    cin >> x[2];

};
void PrintGradeInfo(int x[3]) {
    cout << "************************\n";
    float AvgGrade = (x[0] + x[1] + x[2]) / 3;
    cout << "The average of your Grades is : " << AvgGrade << endl;
}
int main()
{
    int x[3];

    ReadGradeInfo(x);
    PrintGradeInfo(x);

    return 0;
};
    

