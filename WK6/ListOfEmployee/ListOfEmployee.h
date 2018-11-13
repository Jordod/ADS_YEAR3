#include "NodeOfEmployee.h"
class ListOfEmployee {
	friend ostream& operator<<(ostream&, const ListOfEmployee&);
public:
	ListOfEmployee();
	~ListOfEmployee();

	void insertAtFront(string, double);
	const Employee deleteMostRecent();
	double getSalary(string);
	
	const ListOfEmployee& operator=(const ListOfEmployee & l);
private:
	NodeOfEmployee* head;
};

