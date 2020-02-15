#include <iostream>
using namespace std;

int main()
{

	// tipe data C++
	
	// bilangan bulat
	int a = 1;
	long b = 2;
	short c = 3;

	cout << sizeof(int) << " byte" << endl;
	cout << sizeof(long) << " byte" << endl;
	cout << sizeof(short) << " byte" << endl;

	// bilangan decimal
	float d = 1.5;
	double e = 2.5;

	cout << sizeof(float) << " byte" << endl;
	cout << sizeof(double) << " byte" << endl;

	// character
	char f = 'a';

	cout << sizeof(char) << " byte" << endl;

	// boolean: true / false
	bool g = true;

	cout << sizeof(bool) << " byte" << endl;

	return 0;
}
