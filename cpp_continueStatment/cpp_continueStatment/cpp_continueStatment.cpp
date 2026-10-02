

#include <iostream>
using namespace std;
void SumNumbers()
{
    int arr[5];
    int sum = 0;
    for (int i = 0;i < 5;i++)
    {
        cout << "Please enter number " << i + 1 << ":" << endl;
        cin >> arr[i];
        if (arr[i] >= 50)
        {
            continue;
        }
        sum = sum + arr[i];

        
    }
    cout << "the sum is : " << sum << endl;
}

    int main()
    {
        SumNumbers();
    }