#include "ITTIntVector.h"

ITTIntVector::ITTIntVector(int sizeIn) : n(0), cap(sizeIn) {
	arr = new int[cap];
}

ITTIntVector::~ITTIntVector() {
	delete[] arr;
}

int ITTIntVector::size() const {
	return n;
}

int ITTIntVector::capacity() const {
	return cap;
}

void ITTIntVector::push_back(int val) {
	if (n >= cap) resize(2 * cap);
	arr[n] = val;
	++n;
}

void ITTIntVector::resize(int sz) {
	int* new_arr = new int[sz];
	
	if (sz < cap) {
		for (int i = 0; i < sz; i++) {
			new_arr[i] = arr[i];
		}
		n = sz;
	} 
	else {
		for (int i = 0; i < sz; i++) {
			if (i >= cap) {
				new_arr[i] = 0;
			}
			else {
				new_arr[i] = arr[i];
			}
		}
	}

	cap = sz;
	delete[] arr;
	arr = new_arr;
}

const int& ITTIntVector::at(int i) const {
	if (i < 0 || i >= n) return -1; //-1 is placeholder since we haven't done exceptions
	return arr[i];
}

int& ITTIntVector::at(int i) {
	if (i < 0 || i >= n) {
		return arr[0]; //arr[0] is placeholder since we haven't done exceptions
	}
	return arr[i];
}

const int& ITTIntVector::operator[](int i) const {
	return arr[i];
}

int& ITTIntVector::operator[](int i) {
	return arr[i];
}