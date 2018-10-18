#include <iostream>
using namespace std;

int main() //Should be int not void
{
	char chr = 'N';
	if (chr == 'Y' || chr == 'y') //You weren't checking the value of char, just declaring 'y'
		cout << "chr is y" << endl;
	else if (chr == 'N' || chr == 'n') //Same here but for 'n'
		cout << "chr is n" << endl;
	else
		cout << "chr is something else" << endl;
	system("pause");
	return 0;
}
