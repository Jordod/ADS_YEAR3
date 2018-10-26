#include <iostream>
using namespace std;
class Percent
{
public:
	friend istream& operator>>(istream& inputStream, Percent& aPercent);
	friend ostream& operator<<(ostream& outputStream, const Percent& aPercent);
	
	Percent& operator+(const Percent& lh);
	Percent& operator-(const Percent& lh);
	Percent& operator*(const Percent& lh);

	bool operator==(const Percent& lh);
	bool operator<(const Percent& lh);

	Percent();
	Percent(int);
	//There will be other members and friends.
private:
	int value;
};