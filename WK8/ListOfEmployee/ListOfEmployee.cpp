#include "ListOfEmployee.h"
#include <iostream>

using namespace std;

ListOfEmployee::ListOfEmployee() : head(nullptr) {}

ListOfEmployee::ListOfEmployee(ListOfEmployee& rh) : head(nullptr) {
	*this = rh;
}

ListOfEmployee::~ListOfEmployee() {
	NodeOfEmployee* temp;
	while (head) {
		temp = head;
		head = head->next;
		delete temp;
	}
}

void ListOfEmployee::push_front(string n, double s) {
	Employee tempEmp(n, s);
	if (!head) {
		head = new NodeOfEmployee(tempEmp);
	}
	else {
		NodeOfEmployee* newHead = new NodeOfEmployee(tempEmp);
		NodeOfEmployee* temp = head;
		head = newHead;
		head->next = temp;
	}
}

void ListOfEmployee::push_back(string n, double s) {
	Employee tempEmp(n, s);
	NodeOfEmployee* temp;
	for(temp = head; temp->next; temp = temp->next);
	temp->next = new NodeOfEmployee(tempEmp);
}

const Employee ListOfEmployee::deleteAtFront() {
	NodeOfEmployee* temp = head;
	Employee toDelete = temp->e;
	head = temp->next;
	delete temp;
	return toDelete;
}

//Testing Delete and Insert at
void ListOfEmployee::insert(int pos, const Employee& e) {
	if(pos == 0) {
		push_front(e.name, e.salary);
		return;
	}
	NodeOfEmployee* temp = head;
	int i;
	for(i = 0; (i < pos - 1) && (temp->next); temp = temp->next, i++);
	if(i >= pos) return;
	NodeOfEmployee* tempNext = temp->next;
	temp->next = new NodeOfEmployee(e);
	temp->next->next = tempNext;
}

const Employee ListOfEmployee::remove(int pos) {
	if(pos == 0) {
		return deleteAtFront();
	}
	NodeOfEmployee* temp = head;
	int i;
	for(i = 0; (i < pos - 1) && (temp->next); temp = temp->next, i++);
	//if(i >= pos) return; //Throw exception
	NodeOfEmployee* dNode = temp->next;
	Employee dEmp = temp->next->e;
	temp->next = temp->next->next;
	delete dNode;
	return dEmp;
	
}

//Private method cause friends are finicky to figure out
ostream& ListOfEmployee::display(ostream& o) const {
	NodeOfEmployee* temp = head;
	while (temp) {
		o << temp->e << endl;
		temp = temp->next;
	}
	return o;
}

ostream& operator<<(ostream& str, const ListOfEmployee& l) {
	return l.display(str);
}

double ListOfEmployee::getSalary(string name) {
	NodeOfEmployee* temp = head;
	while (temp) {
		if (temp->e.name == name) return temp->e.salary;
		temp = temp->next;
	}
	return temp->e.salary;
}


ListOfEmployee& ListOfEmployee::operator=(const ListOfEmployee & r) { // operloaded = operator
	if (this != &r) { // check for self assignment
		if (head) // free memory of lhs
		{
			while (head)
				deleteAtFront();
		}

		NodeOfEmployee* copyPtr = NULL;
		NodeOfEmployee* origPtr = r.head;

		while (origPtr) {
			if (!head) {
				head = copyPtr = new NodeOfEmployee(Employee((origPtr->e).name, (origPtr->e).salary));
			}
			else {
				copyPtr->next = new NodeOfEmployee(Employee((origPtr->e).name, (origPtr->e).salary));
				copyPtr = copyPtr->next;
			}
			origPtr = origPtr->next;
		}
	}
	return *this;
}