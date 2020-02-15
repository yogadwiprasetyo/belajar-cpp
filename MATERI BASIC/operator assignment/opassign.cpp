#include <iostream>
using namespace std;

int main(){
	float a = 5;

	// operator assignment
	// variabel operasi= ekspresion
	//     a      +=        3

	cout << "hasil a sebelum ditambah: " << a << endl;
	
	a += 7;
	cout << "hasil a setelah ditambah: " << a << endl;
	a *= 3;
	cout << "hasil a setelah dikali: " << a << endl;
	a -= 7;
	cout << "hasil a setelah dikurangi: " << a << endl;
	a /= 3;
	cout << "hasil a setelah dibagi: " << a << endl;

	return 0;
}
