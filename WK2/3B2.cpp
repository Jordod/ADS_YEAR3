#include <iostream>

using namespace std;

bool fillArray(char[], int&);
void printInReverse(char[], int);

int main()
{
	char chars[100];
	int total;

	fillArray(chars, total);

	cout << "You entered " << total << " values" << endl;

	printInReverse(chars, total);

	system("pause");
	return 0;
}

bool fillArray(char chars[100], int& total)
{	
	cout << "Enter up to " << 100 << " characters, each separated by a return" << endl << "Enter . to finish." << endl;
	char in;
	total = 0;
	for (int i = 0; i < 100; i++)
	{
		cin >> in;
		if (in == '.')
			return true;
		chars[i] = in;
		total++;
	}
	return false;
}

void printInReverse(char chars[100], int total)
{
	for (int i = total - 1; i > -1 ; i--)
	{
		cout << chars[i];
	}
	cout << endl;
}