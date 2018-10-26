#include <iostream>
#include <string>

class Money {
public:
	Money(std::string name, int min, int maj);

	std::string getName() const;
	int getMajor() const;
	int getMinor() const;

	Money operator-(const Money&);
	Money operator*(const int);
	Money operator/(const int);
private:
	std::string currencyName;
	int minorUnit, majorUnit;
};