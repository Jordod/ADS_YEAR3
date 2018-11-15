#include "Employee.h"
class NodeOfEmployee {
	friend class ListOfEmployee;
public:
	NodeOfEmployee(Employee);
private:
	Employee e;
	NodeOfEmployee* next;
};