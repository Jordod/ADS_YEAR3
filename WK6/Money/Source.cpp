#include "Money.h"
#include <string>

using namespace std;

int main()
{	
	const string CURRENCY_A = "EURO";
	Money a(CURRENCY_A, 100, 45);
	Money b(CURRENCY_A, 10, 45);

	Money c = b * 2;
	cout << c.getMajor() << ' ' << c.getMinor() << endl;

	c = a / 2;
	cout << c.getMajor() << ' ' << c.getMinor() << endl;

	system("pause");
	return 0;
}