#include <iostream>

using namespace std;

void readInTime();
void printTime(int, int, char);
bool convTime(int&, int);

int main()
{	
	char loop = 'Y';
	do 
	{
		readInTime();
		cout << "Would you like to convert another time? (Y/N) ";
		cin >> loop;
	} while (toupper(loop) == 'Y');
	
	return 0;
}

void readInTime()
{	
	int hrs, mins;
	cout << "Enter hours : ";
	cin >> hrs;
	cout << "Enter mins : ";
	cin >> mins;

	if (!convTime(hrs, mins))
		cout << "Invalid Time" << endl;
}

bool convTime(int& hrs, int mins)
{	
	char type = 'A';// A for AM; P for PM

	if(hrs > 24 || hrs < 0)
		return false;
	if(mins > 60 || mins < 0)
		return false;

	if (hrs > 12)
	{
		hrs -= 12;
		type = 'P';
	}

	printTime(hrs, mins, type);
	return true;
}

void printTime(int hrs, int mins, char type)
{
	cout << hrs << ':' << mins << type << 'M' << endl;
}