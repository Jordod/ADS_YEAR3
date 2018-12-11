#pragma once
#include "ListOfDoubles.h"
#include "StackOfDoubles.h"
class StackOfDoubles {
	friend ostream & operator<<(ostream&, const StackOfDoubles&);
public:
	StackOfDoubles();
	void push(double);
	void pop();
	double top();
private:
	ListOfDoubles list;
};

