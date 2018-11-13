#include "ListOfEmployee.h"
#include <iostream>

using namespace std;

int main() {
	ListOfEmployee list;

	for (int i = 0; i < 8; i++){
		list.insertAtFront(string("Test") + to_string(i), (i + 1) * 100);
	}

	cout << "After Init:" << endl;
	cout << list;
	cout << "Deleted: " << list.deleteMostRecent() << endl;
	cout << list;
	cout << "Found : " << list. << endl;
	system("pause");
	return 0;
}