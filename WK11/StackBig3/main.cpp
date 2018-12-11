#include "StackOfDoubles.h"
#include <iostream>
#include <list>
#include <queue>

using namespace std;

int main() {

	StackOfDoubles s;
	s.push(10);
	s.push(90);
	s.push(30);
	s.push(10);

	StackOfDoubles s2(s);

	cout << s;

	s.pop();
	cout << "Top After Pop: " << s.top() << endl;

	cout << "----- Stack 2 -----" << endl;
	cout << s2;

	system("pause");
	return 0;
}