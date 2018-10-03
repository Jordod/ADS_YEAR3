#include <iostream>

using namespace std;

int main()
{
	const double METRIC_TON_OUNCES = 35273.92;
	double weightOunces;
	cout << "Enter weight of package in ounces: ";
	cin >> weightOunces;

	cout << "Package is " << (weightOunces / METRIC_TON_OUNCES) << " tons" << endl;
	cout << "You need " << (METRIC_TON_OUNCES / weightOunces) << " boxes for a ton of cereal" << endl;
	
	system("pause");
	return 0;
}
