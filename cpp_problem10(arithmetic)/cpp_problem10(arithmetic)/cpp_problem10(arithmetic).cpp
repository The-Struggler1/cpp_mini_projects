

#include <iostream>
using namespace std;
void  ReadNumbers(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Please enter the first mark: ";
	cin >> Mark1;
	cout << "Please enter the second mark: ";
	cin >> Mark2;
	cout << "Please enter the third mark: ";
	cin >> Mark3;
}
int Sumof3Marks(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}
float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
	return (float)Sumof3Marks(Mark1, Mark2, Mark3) / 3;
}
void PrintResults(int Mark1, int Mark2, int Mark3)
{

	cout << "The average of the three marks is: " << CalculateAverage(Mark1, Mark2, Mark3) << endl;
}
int main()
{
	int Mark1, Mark2, Mark3;
	ReadNumbers(Mark1, Mark2, Mark3);
	PrintResults(Mark1, Mark2, Mark3);
    return 0;
}

