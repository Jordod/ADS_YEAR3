#include <fstream>
#include <string>

using namespace std;

int main()
{
	ofstream empFileOut;
	ifstream empFileIn;
	const double PAY_INCREASE = 0.076;
	double salary;
	double newSalary;
	string name;

	empFileOut.open("emp.txt");
	for (int i = 0; i < 11; i++) 
	{
		empFileOut << "John" << i << " " << 20000.0 << endl;
	}
	empFileOut.close();

	empFileIn.open("emp.txt");
	empFileOut.open("empNew.txt");
	while (!empFileIn.fail()) 
	{
		empFileIn >> name >> salary;
		newSalary = (salary * PAY_INCREASE) + salary;
		empFileOut << name << endl;
		empFileOut << "Back pay due = EUR " << newSalary - salary << endl;
		empFileOut << "New Annual Pay = EUR " << newSalary << endl;
		empFileOut << "New Monthly Pay = EUR " << newSalary / 12 << endl;
	}
	
	empFileIn.close();
	empFileOut.close();

	return 0;
}