#include "ListOfEmployee.h"
#include <iostream>

using namespace std;

int main() {
	ListOfEmployee list;
	
	for (int i = 0; i < 3; i++) {
		list.push_back(string("Back") + to_string(i), (i + 1) * 100);
	}
	
	for (int i = 0; i < 2; i++) {
		list.push_front(string("Front") + to_string(i), (i + 1) * 100);
	}


	cout << "After Init:" << endl;
	cout << list;
	cout << "Deleted At Front: " << list.deleteAtFront() << endl;
	cout << "Deleted At Front: " << list.deleteAtFront() << endl;
	cout << list;
	cout << "Found : " << list.getSalary("Front0") << " for Employee Front0" << endl;

	ListOfEmployee list2 = list;

	list2.push_back("List2", 100);
	list2.push_back("List2", 100);

	cout << "List 2: (After 2 push_back calls)" << endl;
	cout << list2;
	cout << "List 1:" << endl;
	cout << list;
	
	cout << "Deleted At End: " << list.deleteAtEnd() << endl;
	cout << list;
	
	list.insert(1, Employee("Insert", 100));
	cout << "Insert at pos = 1 " << endl << list;
	
	return 0;
}
