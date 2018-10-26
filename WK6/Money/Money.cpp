#include "Money.h"
#include <string>

Money::Money(std::string name, int min, int maj) 
	: currencyName(name), majorUnit(maj), minorUnit(min) {}


std::string Money::getName() const {
	return currencyName;
}

int Money::getMajor() const {
	return majorUnit;
}

int Money::getMinor() const {
	return minorUnit;
}

Money& Money::operator-(const Money& lh) {
	if (Money::currencyName != lh.currencyName) return;
	int minAmt, maxAmt;
	maxAmt = Money::majorUnit = lh.majorUnit;
	minAmt = Money::minorUnit = lh.minorUnit;
	while (minAmt < 0)
	{
		maxAmt--;
		minAmt += 100;
	}
	
}