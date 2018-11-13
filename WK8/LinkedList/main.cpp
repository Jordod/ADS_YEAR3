#include "ListOfInts.h"
#include <iostream>

using namespace std;

int main() {
    ListOfInts list;

    for (int i = 0; i < 10; ++i) {
        list.insert(i);
    }
    list.display();
    cout << "Deleted: " << list.deleteMostRecent() << " using deleteMostRecent()" << endl;
    list.display();
    cout << "Deleted: " << list.deleteAt(3) << " using deleteAt(3)" << endl;
	cout << "Deleted: " << list.deleteAt(0) << " using deleteAt(0)" << endl;
	cout << "Deleted: " << list.deleteAt(6) << " using deleteAt(6)" << endl;
	
	cout << "Trying to delete position > num of elements: " << list.deleteAt(50) << endl;
	cout << "Trying to delete position < 0: " << list.deleteAt(-1)  << endl;
	list.display();

    	system("pause");
	return 0;
}
