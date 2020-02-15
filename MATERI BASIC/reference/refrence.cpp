#include <iostream>
using namespace std;

int main(){
	int a = 6;

	// reference: menyamakan sebuah nilai dan alamat dari tipedata lain
	cout << " nilai dari a: " << a << endl;
	cout << "addres dari a: " << &a << endl << endl;

	int &b = a;
	cout << " nilai dari b: " << b << endl;
	cout << "addres dari b: " << &b << endl << endl;

	a = 20;
	cout << " nilai dari a: " << a << endl;
	cout << "addres dari a: " << &a << endl; 
	cout << " nilai dari b: " << b << endl;
	cout << "addres dari b: " << &b << endl << endl;

	return 0;
}
