#include <iostream>
using namespace std;

int main()
{
	bool repeat = true;
	char answer;

	const int STANDARD_PAY_END = 40; //time and a half paid after 40 hrs
	int hoursWorked;
	double hourlyRate, finalPay;

	while (repeat)
	{
		cout << "Enter number of hours worked : ";
		cin >> hoursWorked;
		cout << "Enter hourly rate : ";
		cin >> hourlyRate;


		if (hoursWorked <= STANDARD_PAY_END)
		{
			finalPay = hourlyRate * hoursWorked;
		}
		else
		{
			int extraHours = hoursWorked - STANDARD_PAY_END;
			finalPay = (40 * hourlyRate) + (extraHours * (hourlyRate * 1.5));
		}
		cout << "Pay = EUR " << finalPay << endl;
		cout << "Would you like to calculate more wages? (Y/N) ";
		cin >> answer;

		if (answer == 'Y' || answer == 'y') {
			repeat = true;
		}
		else
		{
			repeat = false;
		}

	}
	return 0;
}