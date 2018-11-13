#include "Employee.h"
struct NodeOfEmployee {
	friend class ListOfEmployee;
	NodeOfEmployee(Employee);
	Employee e;
	NodeOfEmployee* next;
};

