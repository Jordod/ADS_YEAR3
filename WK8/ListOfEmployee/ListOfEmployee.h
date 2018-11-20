#include "NodeOfEmployee.h"
class ListOfEmployee {
	friend ostream& operator<<(ostream&, const ListOfEmployee&);
public:
	ListOfEmployee();
	ListOfEmployee(ListOfEmployee&);
	~ListOfEmployee();

	void push_front(string, double);
	void push_back(string, double);
	const Employee deleteAtFront();
	const Employee deleteAtEnd();
	const Employee remove(int);
	const Employee remove(string);
	void insert(int, const Employee&);
	double getSalary(string);

	ListOfEmployee& operator=(const ListOfEmployee & l);
private:
	NodeOfEmployee* head;
	ostream& display(ostream&) const;
};