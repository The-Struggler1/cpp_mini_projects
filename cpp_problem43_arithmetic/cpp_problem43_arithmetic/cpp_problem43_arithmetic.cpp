

#include <iostream>
#include <cmath>
using namespace std;
void SecsToAll() {
    cout << "Enter amount of seconds \n";
    int Total_seconds;
    cin >> Total_seconds;

    int seconds_per_day = 24 * pow(60, 2);
    int seconds_per_hour = pow(60, 2);
    int seconds_per_minute = 60;

    int days = Total_seconds / seconds_per_day;
    int rem_after_days = Total_seconds % seconds_per_day;
    int hours = rem_after_days / seconds_per_hour;
    int rem_after_hours = rem_after_days % seconds_per_hour;
    int minutes = rem_after_hours / seconds_per_minute;
    int seconds = rem_after_hours % seconds_per_minute;

    cout << days << ":" << hours << ":" << minutes << ":" << seconds << "\n";
}
int main()
{
    SecsToAll();
    return 0;
}

