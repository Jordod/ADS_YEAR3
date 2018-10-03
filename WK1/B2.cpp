#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream empFileOut;
	ifstream empFileIn;
	const double PAY_INCREASE = 0.076;
	double salary;
	double newSalary;

	empFileOut.open("emp.txt");
	empFileOut << 20000.0;
	empFileOut.close();

	empFileIn.open("emp.txt");
	empFileIn >> salary;
	empFileIn.close();

	newSalary = (salary * PAY_INCREASE) + salary;

	empFileOut.open("emp.txt");
	empFileOut << "New Annual Pay = EUR " << newSalary  << endl;
	empFileOut << "New Monthly Pay = EUR " << newSalary / 12 << endl;
	empFileOut.close();

	return 0;
}