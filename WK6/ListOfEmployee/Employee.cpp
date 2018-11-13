#include "Employee.h"

Employee::Employee() : name("No Name"), salary(0)
{}


Employee::Employee(string n, double s) : name(n), salary(s)
{}

ostream& operator<<(ostream& str, const Employee& e) {
	return str << e.name << ' ' << e.salary;
}