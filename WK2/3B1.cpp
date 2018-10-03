#include <iostream>

using namespace std;

void inputAndAverage5();
void average5(double[]);
void averageN(double[], int);
double readIn(double[], int);

int main()
{
	//Q1
	inputAndAverage5();

	//Q2
	const int Q2_SIZE = 5;
	double numsQ2[Q2_SIZE];
	average5(numsQ2);

	//Q3
	const int Q3_SIZE = 8;
	double numsQ3[Q3_SIZE];
	averageN(numsQ3, Q3_SIZE);

	system("pause");
}

void inputAndAverage5()
{
	const int SIZE = 5;
	double nums[SIZE];
	double total = readIn(nums, SIZE), average;
	
	average = total / SIZE;

	cout << "Average of your numbers is : " << average << endl;
}

void average5(double nums[])
{
	const int SIZE = 5;
	double total = readIn(nums, SIZE);
	double average = total / SIZE;

	cout << "Average of your numbers is : " << average << endl;
}

void averageN(double nums[], int size)
{
	double total = readIn(nums, size);
	double average = total / size;

	cout << "Average of your numbers is : " << average << endl;
}
//Use C++ arrays

double readIn(double nums[], int size)
{
	double total = 0.0;

	cout << "Enter " << size << " decimal values, each separated by a return" << endl;

	for (int i = 0; i < size; i++)
	{
		cin >> nums[i];
		total += nums[i];
	}
	return total;
}
