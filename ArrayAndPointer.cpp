/*
 * ArrayAndPointer.cpp
 * 
 * Using pointers to access array elements. 
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int T[] = {11,23,31,49,51,65,79,88};
	int n = sizeof(T) / sizeof(int);
	for (int i = 0; i < n; i++)
		cout << "T[" << i << "]" << (i < n - 1 ? ", " : "");
	cout << endl;
	for (int i = 0; i < n; i++)
		cout << setw(4) << T[i] << (i < n - 1 ? ", " : "");
	cout << endl;
	int* p = T;
	cout << "p= " << p << setw(10) << right << "*p= " << *p << endl;
	cout << "p= " << p << setw(10) << right << "*(p+2)= " << *(p + 2) << endl;
	cout << "p= " << p << setw(10) << right << "*(++p)= " << *(++p) << endl;
	cout << "p= " << p << setw(10) << right << "*(p++)= " << *(p++) << endl;
	cout << "p= " << p << setw(10) << right << "*(p-1)= " << *(p-1) << endl;
	p = &T[1];
	for (int i = 0; i < n; i++)
		cout << setw(4) << *(p+i) << (i < n - 1 ? ", " : "");
	cout << endl;
	
	// Range-based for loop.
	for (auto& x : T)
	{
		cout << setw(4) << x;
		if (&x != &T[n - 1])
			cout << ", ";
	}
	int v = 1;
	int& d = v;
	d = 15;
	cout << endl;
	return 0;
}