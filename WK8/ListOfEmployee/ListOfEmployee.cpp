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

void ListOfEmployee::insertAtFront(string n, double s) {
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

const Employee ListOfEmployee::deleteMostRecent() {
	NodeOfEmployee* temp = head;
	Employee toDelete = temp->e;
	head = temp->next;
	delete temp;
	return toDelete;
}

ostream& operator<<(ostream& str, const ListOfEmployee& l) {
	NodeOfEmployee* temp = l.head;
	while (temp) {
		str << temp->e << endl;
		temp = temp->next;
	}
	return str;
}

double ListOfEmployee::getSalary(string name) {
	NodeOfEmployee* temp = head;
	while (temp) {
		if (temp->e.name == name) return temp->e.salary;
		temp = temp->next;
	}
	return temp->e.salary;
}


const ListOfEmployee & ListOfEmployee::operator=(const ListOfEmployee & l) { // operloaded = operator
	if (this != &l) { // check for self assignment
		if (head) // free memory of lhs
		{
			while (head)
				deleteMostRecent();
		}

		NodeOfEmployee* copyPtr = NULL;
		NodeOfEmployee* origPtr = l.head;

		while (origPtr) {
			if (!head) {
				head = copyPtr = new NodeOfEmployee(Employee((origPtr->e).name, (origPtr->e).salary));
			} else {
				copyPtr->next = new NodeOfEmployee(Employee((origPtr->e).name, (origPtr->e).salary));
				copyPtr = copyPtr->next;
			}
			origPtr = origPtr->next;
		}
	}
	return *this;
}
