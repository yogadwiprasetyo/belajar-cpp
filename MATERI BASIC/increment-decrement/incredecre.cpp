#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int b = 5;

	//increment(penambahan bertahap)
	//increment ada 2; preincrement & post increment 

	//postincrement: dibaca terlebih dahulu
	cout << "nilai awal a: " << a << endl;
	cout << a++ << endl;
	cout << "nilai a sekarang: " << a << endl;

	//preincrement: diproses terlebih dahulu
	cout << "nilai awal b: " << b << endl;
	cout << ++b << endl;
	cout << "nilai b sekarang: " << b << endl;


	// decrement(pengurangan bertahap)
	//decrement ada 2; predecrement & postdecrement 
	//a-- & --b
	return 0;
}
