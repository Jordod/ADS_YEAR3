#include <iostream>

using namespace std;

void inputAndAverage5();
void average5(double[]);
void averageN(double[], int);

int main()
{	
	//inputAndAverage5();
	system("pause");
}

void inputAndAverage5()
{
	const int SIZE = 5;
	double total = 0.0, average = 0.0;
	double nums[SIZE];

	cout << "Enter 5 decimal values, each separated by a return" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cin >> nums[i];
		total += nums[i];
	}
	average = total / SIZE;

	cout << "Average of your numbers is : " << average << endl;
}

void average5(double nums[])
{

}