#include <iostream>

using namespace std;

int main()
{
	const int COUPONS_FOR_BAR = 7;
	const double BAR_PRICE_EUR = 1.00;

	int amtToBuy, barTotal, coupons;

	cout << "Enter amount to spend on bars of chocolate : ";
	cin >> amtToBuy;

	amtToBuy /= BAR_PRICE_EUR;
	barTotal = amtToBuy;

	barTotal += barTotal / COUPONS_FOR_BAR;

	coupons = (amtToBuy % COUPONS_FOR_BAR) + (barTotal - amtToBuy);

	barTotal += coupons / COUPONS_FOR_BAR;

	cout << "You have: " << barTotal << " bars with " << barTotal % COUPONS_FOR_BAR << " coupons left over" << endl;

	system("pause");
	return 0;
}