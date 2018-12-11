#include "StackOfDoubles.h"

StackOfDoubles::StackOfDoubles() {}

void StackOfDoubles::push(double d) {
	list.push_back(d);
}

void StackOfDoubles::pop() {
	list.deleteMostRecent();
}

double StackOfDoubles::top() {
	return list.getMostRecent();
}

ostream & operator<<(ostream& str, const StackOfDoubles& stck) {
	stck.list.displayList(str);
	return str;
}
