#include <iostream>
using namespace std;

int main() //Return type should be int
{
	double* d = new double[3]; //Needs to be an array if you wanna iterate
	for (unsigned int i = 0; i < 3; i++) {
		d[i] = 1.5 + i;
	}
	for (int i = 2; i >= 0; i--) { //Can't be unsigned since it decrements to -1 on the final run-through
		cout << d[i] << endl;
	}
	system("pause"); //Added so I can read output
	return 0;
}