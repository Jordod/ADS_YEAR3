#include "ListOfEmployee.h"
#include <iostream>

using namespace std;

int main() {
	ListOfEmployee list;

	for (int i = 0; i < 8; i++) {
		list.insertAtFront(string("Test") + to_string(i), (i + 1) * 100);
	}

	cout << "After Init:" << endl;
	cout << list;
	cout << "Deleted: " << list.deleteMostRecent() << endl;
	cout << list;
	cout << "Found : " << list.getSalary("Test0") << " for Employee Test0" << endl;

	ListOfEmployee list2 = list;

	list2.deleteMostRecent();
	list2.deleteMostRecent();

	cout << "List after copy constructor and 2 deletes" << endl;
	cout << list2;
	cout << "List 1:" << endl;
	cout << list;

	system("pause");
	return 0;
}