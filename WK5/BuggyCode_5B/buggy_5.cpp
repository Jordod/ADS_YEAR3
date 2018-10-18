#include <iostream>
using namespace std;
int main()
{
	int count = 1;
	while (count <= 5)
	{
		int count = 1;
		cout << count << "\n";
		count++;
	}
	system("pause");
	return 0;
	/*
	The loop is infinite because C++ doesn't make a new local for while loops
	*/
}
