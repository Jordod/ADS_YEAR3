#include "StackOfDoubles.h"

StackOfDoubles::StackOfDoubles() {}

StackOfDoubles::~StackOfDoubles() {
	list.~ListOfDoubles();
}

StackOfDoubles::StackOfDoubles(StackOfDoubles& stck) {
	*this = stck;
}

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

StackOfDoubles& StackOfDoubles::operator=(const StackOfDoubles& stck) {
	if (this != &stck) {
		list = stck.list;
	}
	return *this;
}