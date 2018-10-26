#include "Percent.h"
#include <iostream>

Percent::Percent() : value(0) {}

Percent::Percent(int in) : value(in) {}

Percent& Percent::operator+(const Percent& lh) {
	Percent x(Percent::value + lh.value);
	return x;
}

Percent& Percent::operator-(const Percent& lh) {
	Percent x(Percent::value - lh.value);
	return x;
}

Percent& Percent::operator*(const Percent& lh) {
	Percent x(Percent::value * (lh.value / 100.0));
	return x;
}

bool Percent::operator==(const Percent&lh) {
	return Percent::value == lh.value;
}

bool Percent::operator<(const Percent&lh) {
	return Percent::value < lh.value;
}

ostream& operator<<(ostream& outputStream, const Percent& aPercent) {
	return outputStream << aPercent.value;
}

istream& operator >>(istream& inputStream,	Percent& aPercent){
	return inputStream >> aPercent.value;
}