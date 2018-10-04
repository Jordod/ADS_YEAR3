#include <iostream>

using namespace std;

int inputNums(int[], int, int&);
void printNums(int [], int);
void calcAvg(int[], int);

int main()
{
	int nums[12];
	int max = 12, size;
	inputNums(nums, max, size);
	printNums(nums, size);
	system("pause");
	return 0;
}

int inputNums(int nums[], int max, int& size)
{
	cout << "Enter up to " << max << " lotto numbers, each separated by a return" << endl << "Enter -1 to finish." << endl;
	int in;
	size = 0;
	for (int i = 0; i < max; i++)
	{
		cin >> in;
		if (in < 0)
			return -1;
		nums[i] = in;
		size++;
	}
	return 0;
}

void printNums(int nums[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << nums[i];
	}

	cout << endl;

	calcAvg(nums, size);

	for (int i = size - 1; i > -1; i--)
	{
		cout << nums[i];
	}
	cout << endl;

	for (int i = 1; i < size - 1; i++)
	{
		cout << nums[i];
	}
	cout << endl;

}

void calcAvg(int nums[], int size)
{
	double avg = 0;

	for (int i = 0; i < size; i++)
	{
		avg += nums[i];
	}

	avg /= size;

	cout << "Average is " << avg << endl;
}