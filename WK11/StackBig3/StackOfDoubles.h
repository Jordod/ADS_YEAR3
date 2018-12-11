#pragma once
#include "ListOfDoubles.h"
#include "StackOfDoubles.h"
class StackOfDoubles {
	friend ostream & operator<<(ostream&, const StackOfDoubles&);
public:
	StackOfDoubles();
	~StackOfDoubles();
	StackOfDoubles(StackOfDoubles&);
	void push(double);
	void pop();
	double top();

	StackOfDoubles& operator=(const StackOfDoubles&);
private:
	ListOfDoubles list;
};

