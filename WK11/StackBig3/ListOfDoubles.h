#ifndef LISTOFDOUBLES_H_
#define LISTOFDOUBLES_H_

#include <iostream>
using namespace std;

class DoubleListNode
{
	friend class ListOfDoubles;
public:
	DoubleListNode(double = 0);
private:
	double theValue;
	DoubleListNode *next;
};

class ListOfDoubles
{
public:
	ListOfDoubles();
	~ListOfDoubles();
	void insert(double);
	void push_back(double);
	double getMostRecent();
	void displayList(ostream &str) const;
	double deleteMostRecent();
	double deleteDouble(int pos);

	ListOfDoubles& operator=(const ListOfDoubles&);
private:
	DoubleListNode *head;
};
#endif