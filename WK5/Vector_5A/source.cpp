#include "ITTIntVector.h"
#include <iostream>

using namespace std;

int main() {
	ITTIntVector vec(10);

	cout << "Size: " << vec.size() << endl
		<< "Capacity: " << vec.capacity() << endl;

	for (int i = 0; i < 11; i++)
	{
		vec.push_back(10 + (i * 100));
	}

	cout << endl << "After Pushing: " << endl 
		<< "Size: " << vec.size() << endl
		<< "Capacity: " << vec.capacity() << endl;

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ' ';
	}
	cout << endl;

	vec.resize(5);
	cout << endl << "After Resize: " << endl
		<< "Size: " << vec.size() << endl
		<< "Capacity: " << vec.capacity() << endl;

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ' ';
	}
	cout << endl;

	cout << endl << "Using at(): " << vec.at(2) << ' ' << 
		vec.at(-1) << ' ' << vec.at(200) << endl; //Returns first element in vector since we havent done exceptions

	vec.at(2) = 999;
	vec[3] = 212;

	cout << endl << "After Updates with at() and []: " << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ' ';
	}
	cout << endl;

	system("pause");
	return 0;
}