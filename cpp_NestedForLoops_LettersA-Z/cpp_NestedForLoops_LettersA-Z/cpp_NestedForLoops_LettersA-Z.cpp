

#include <iostream>
using namespace std;

int main()
{
	
	for (char i = 65; i <= 90; i++)
	{
		cout << "Letter:" << i << endl;
		for (char j = 65;  j <= 90; j++)
		{
			cout << i << j << endl;

		}
		
		cout << endl; 
		cout << "---------------------------------\n";
	}
}
