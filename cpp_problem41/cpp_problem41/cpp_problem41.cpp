

#include <iostream>

using namespace std;
float ReadPositiveNumbers(string Message)
{
    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;

    } while (Number <= 0);
    return Number;
}
float HourstoDays(float NumberOfHours)
{
    return (float)NumberOfHours / 24;
}
float HoursToWeeks(float NumberOfHours)
{
    return (float)NumberOfHours / (24 * 7);
}
float DaystoWeeks(float NumberOfDays)
{
    return (float)NumberOfDays / 7;
}
int main()
{
    float NumberOfHours = ReadPositiveNumbers("Please Enter Number of Hours:");
    float NumberofDays = HourstoDays(NumberOfHours);
    float NumberofWeeks = DaystoWeeks(NumberOfHours);
    cout << endl;
    cout << "Total Hours = " << NumberOfHours << endl;
    cout << "Total Days = " << NumberofDays << endl;
    cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;
    
    return 0;
}

