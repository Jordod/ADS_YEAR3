class ITTIntVector {

private:
	int* arr; //Pointer to first element
	int n;	//Size of vector
	int cap; //capacity of vector

public:
	ITTIntVector(int sizeIn);
	~ITTIntVector();
	
	void push_back(int val);
	int size() const;
	int capacity() const;
	void resize(int sz);
	const int& at(int i) const;
	int& at(int i);

	const int& operator[](int i) const; //Overloading operator
	int& operator[](int i);
};