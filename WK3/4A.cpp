#include <iostream>

using namespace std;

void deleteRepeats(char[], int& numUsed);

int main()
{	
	int size;
	char a[10] = { 'a', 'b', 'a', 'c' };
	char b[10] = { 'a', 'b', 'c', 'c' };
	char c[10] = { 'a', 'b', 'a', 'b' };
	char d[10] = { 'a', 'b', 'b', 'b' };
	char e[10] = { 'a', 'b', 'a', 'a' };
	char f[10] = { 'a', 'a', 'a', 'a' };
	
	size = 4;
	deleteRepeats(a, size);
	size = 4;
    deleteRepeats(b, size);
    size = 4;
    deleteRepeats(c, size);
    size = 4;
    deleteRepeats(d, size);
    size = 4;
    deleteRepeats(e, size);
    size = 4;
    deleteRepeats(f, size);


	system("pause");
	return 0;
}

void deleteRepeats(char x[], int& numUsed)
{	
	for (int i = 0; i < numUsed; i++)
	{
		for (int j = 0; j < numUsed; j++)
		{	
			if (i != j)
			{
				if (x[i] == x[j])
				{
				    x[j] = '\0';
					
				}
			}
			
		}
		
	}
	int newUsed = numUsed;
	for(int i = 0; i < numUsed; i++)
	{
	   if(x[i] == '\0')
	   {
	    if(i < numUsed - 1)
	    {
	        x[i] = x[i + 1];
	        x[i+1] = '\0';
	    }
	    newUsed--;
	   }
	}
	cout << "New Array: " <<  x << endl << "New Size: " <<  newUsed << endl;
}