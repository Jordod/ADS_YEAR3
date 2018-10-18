#include <iostream>
using namespace std;

int main()
{
	int count = 1;
	for (; count <= 5; count++)
	{
		int count = 1;
		cout << count << "\n";
	}
	system("pause");
	return 0;
	/*
	1 is printed but the loop isn't infinite 
	because C++ stores the 2 count variables separate
	when using for loops
	*/
}
