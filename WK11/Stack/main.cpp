#include "StackOfDoubles.h"
#include <iostream>

using namespace std;

int main() {

	StackOfDoubles s;
	s.push(10);
	s.push(90);
	s.push(30);
	s.push(10);

	cout << s;

	s.pop();
	cout << s.top() << endl;

	system("pause");
	return 0;
}