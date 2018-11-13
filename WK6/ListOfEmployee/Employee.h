#include <string>
#include <iostream>
using namespace std;
class Employee {
	friend ostream& operator<<(ostream&, const Employee&);
	friend class ListOfEmployee;
public:
	Employee();
	Employee(string, double);
private:
	string name;
	double salary;
};

