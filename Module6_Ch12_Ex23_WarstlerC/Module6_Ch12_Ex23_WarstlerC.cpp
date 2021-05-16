#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int temp[7][2];
	double avgHigh = 0, avgLow = 0;
	
	cout << "Enter the highest and lowest temperatures for seven days: " << endl;
	
	for (int i = 0; i < 7; i++)
	{
		cout << "Day " << i+1 << ": ";
		cin >> temp[i][0] >> temp[i][1];
	}

	for (int i = 0; i < 7; i++)
	{
		avgHigh += temp[i][0];
		avgLow += temp[i][1];
	}

	avgHigh /= 7;
	avgLow /= 7;

	cout << "Average temperatures are: " << fixed << setprecision(1) << avgHigh << " and " << avgLow << endl;
}