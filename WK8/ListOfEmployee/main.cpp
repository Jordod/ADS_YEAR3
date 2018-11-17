#include "ListOfEmployee.h"
#include <iostream>

using namespace std;

int main() {
	ListOfEmployee list;

	for (int i = 0; i < 4; i++) {
		list.push_front(string("Front") + to_string(i), (i + 1) * 100);
	}
	
	for (int i = 0; i < 4; i++) {
		list.push_back(string("Back") + to_string(i), (i + 1) * 100);
	}
	
	list.insert(3, Employee("TEST", 10));
	list.remove(2);

	cout << "After Init:" << endl;
	cout << list;
	cout << "Deleted: " << list.deleteAtFront() << endl;
	cout << list;
	cout << "Found : " << list.getSalary("Front0") << " for Employee Front0" << endl;

	ListOfEmployee list2 = list;

	list2.deleteAtFront();
	list2.deleteAtFront();

	cout << "List after copy constructor and 2 deletes" << endl;
	cout << list2;
	cout << "List 1:" << endl;
	cout << list;
	
	
	
	return 0;
}