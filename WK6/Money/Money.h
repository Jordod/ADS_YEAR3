#include <iostream>
#include <string>

class Money {
public:
    Money(std::string name, int min, int maj);

    Money operator-(const Money&);
    Money operator*(const int);
    Money operator/(const int);

    bool operator==(const Money&);
    bool operator<(const Money&);
    bool operator>(const Money&);

    friend std::ostream& operator<<(const std::ostream&, const Money&);
private:
    std::string currencyName;
    int minorUnit, majorUnit;

};
