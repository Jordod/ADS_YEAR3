#include "Percent.h"
#include <iostream>

using namespace std;

int main()
{
	Percent one(50);
	Percent two(20);
	Percent three(0);

	cout << "After Declaration"  << endl;
	cout << "One: " << one << endl;
	cout << "Two: " << two << endl;
	

	cout << endl << "Enter Value for Percent 3" << endl;
	cin >> three;
	cout << "One: " << one << endl;
	cout << "Two: " << two << endl;
	cout << "Three: " << three << endl;


	cout << endl << "three = one + two" << endl;
	three = one + two;
	cout << "One: " << one << endl;
	cout << "Two: " << two << endl;
	cout << "Three: " << three << endl;

	cout << endl << "three = one - two" << endl;
	three = one - two;
	cout << "One: " << one << endl;
	cout << "Two: " << two << endl;
	cout << "Three: " << three << endl;

	cout << endl << "three = one * two" << endl;
	three = one * two;
	cout << "One: " << one << endl;
	cout << "Two: " << two << endl;
	cout << "Three: " << three << endl;

	cout << endl << "three == one" << endl;
	cout << (three == one ? "true" : "false") << endl;

	cout << endl << "two < one" << endl;
	cout << (two < one ? "true" : "false") << endl;
	

	system("pause");
	return 0;
}