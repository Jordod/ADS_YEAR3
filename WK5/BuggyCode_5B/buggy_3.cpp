#include <iostream>
using namespace std;
int main() //Return type should be main
{
	int t1[] = { 0,0,1,1,1 }, t2[] = { 0,0,1,1,1 };
	int *p1 = t1, *p2 = t2;
	while (!*p1++ || !*p2++); //Increments the pointer value, not the value stored [need (*p1)++ to do that] by the size of an int until they both = 0 (!0 == (0 == 0))
	cout << (p1 - t1) << endl;
	cout << (p2 - t2) << endl; //The distance between the memory addresses
	system("pause");
	return 0;
}