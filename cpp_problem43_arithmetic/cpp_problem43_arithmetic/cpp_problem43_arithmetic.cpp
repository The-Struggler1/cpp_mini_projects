

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
struct strTaskduration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
strTaskduration SecondsToTaskDuration(int TotalSeconds)
{
    strTaskduration TaskDuration;
  const  int seconds_per_day = 24 * pow(60, 2);
  const  int seconds_per_hour = pow(60, 2);
  const  int seconds_per_minute = 60;
  int Remainder = 0;


  TaskDuration.NumberOfDays = floor(TotalSeconds / seconds_per_day);
  Remainder = TotalSeconds % seconds_per_day;
  TaskDuration.NumberOfHours = floor(Remainder / seconds_per_hour);
  Remainder = Remainder % seconds_per_hour;
  TaskDuration.NumberOfMinutes = floor(Remainder / seconds_per_minute);
  Remainder = Remainder % seconds_per_minute;
  TaskDuration.NumberOfSeconds = Remainder;
  return TaskDuration;
}
void PrintTAskDurationDetails(strTaskduration TaskDuration)
{
    cout << "\n";
    cout << TaskDuration.NumberOfDays << ":"
        << TaskDuration.NumberOfHours << ":"
        << TaskDuration.NumberOfMinutes << ":"
        << TaskDuration.NumberOfSeconds << endl;
}

int main()
{
    int TotalSeconds = ReadPositiveNumber("Please Enter Total Seconds:");
    PrintTAskDurationDetails(SecondsToTaskDuration(TotalSeconds));

    return 0;
}

