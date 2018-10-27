#include "Money.h"

Money::Money(std::string name, int maj, int min)
        : currencyName(name), majorUnit(maj), minorUnit(min) {}

Money Money::operator-(const Money& lh) {
    //if (Money::currencyName != lh.currencyName); //Would throw exception here
    int minAmt, maxAmt;
    maxAmt = Money::majorUnit - lh.majorUnit;
    minAmt = Money::minorUnit - lh.minorUnit;
    while (minAmt < 0)
    {
        maxAmt--;
        minAmt += 100;
    }
    Money x(Money::currencyName, maxAmt, minAmt);
    return x;
}

Money Money::operator*(const int amt) {
    //if (Money::currencyName != lh.currencyName); //Would throw exception here
    int minAmt, maxAmt;
    maxAmt = Money::majorUnit * amt;
    minAmt = Money::minorUnit * amt;
    while (minAmt > 100)
    {
        maxAmt++;
        minAmt -= 100;
    }
    Money x(Money::currencyName, maxAmt, minAmt);
    return x;
}

Money Money::operator/(const int amt) {
    //if (Money::currencyName != lh.currencyName); //Would throw exception here
    Money x(Money::currencyName, Money::majorUnit / amt, Money::minorUnit / amt);
    return x;
}

bool Money::operator==(const Money& lh) {
    if(Money::majorUnit == lh.majorUnit) {
        if(Money::minorUnit == lh.minorUnit)
            return true;
    }
    return false;
}

bool Money::operator<(const Money& lh) {
    if(Money::majorUnit < lh.majorUnit) return true;
    if(Money::majorUnit == lh.majorUnit) {
        if(Money::minorUnit < lh.minorUnit)
            return true;
    }
    return false;
}

bool Money::operator>(const Money& lh) {
    if(Money::majorUnit > lh.majorUnit) return true;
    if(Money::majorUnit == lh.majorUnit) {
        if(Money::minorUnit > lh.minorUnit)
            return true;
    }
    return false;
}

std::ostream& operator<<(const std::ostream& stream, const Money& money) {
    return std::cout << money.currencyName << ' ' << money.majorUnit << '.' << money.minorUnit;
}
