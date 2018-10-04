#include <iostream>

using namespace std;

int inputDonations(double[], int, int&);
void calcAvg(double[], int&);

int main()
{
	const int DON_MAX = 10;
	int size = 0;
	double donations[DON_MAX];

	inputDonations(donations, DON_MAX, size);
	calcAvg(donations, size);

	system("pause");
	return 0;
}

int inputDonations(double donations[], int max, int& size)
{	
	cout << "Enter up to " << max << " donation amounts, each separated by a return" << endl << "Enter a non-number to finish." << endl;
	for (int i = 0; i < max; i++)
	{
		if (!(cin >> donations[i]))
			return -1;
		size++;
	}
	return 0;
}

void calcAvg(double donations[], int& size)
{
	double avg = 0;
	int countAboveAvg = 0;

	for (int i = 0; i < size; i++)
	{
		avg += donations[i];
	}

	avg /= size;

	cout << "Average donation is " << avg << endl;
	
	for (int i = 0; i < size; i++)
	{
		if (donations[i] > avg)
			countAboveAvg++;
	}
	cout << countAboveAvg << " donation(s) are above average" << endl;
}