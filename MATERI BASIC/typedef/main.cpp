#include <iostream>

using namespace std;

int main(){

	// Typedef adalah memberikan alias untuk tipedata

	typedef int I;
	typedef int Vector2D[3];
	typedef unsigned long P;
	typedef double Vector[2];

	using nomor = double;

	I a = 10;
	Vector2D b = {3,5,7};
	P c = 2343555667;
	Vector d = {12.345,10.321};
	nomor e = 1.234;

	cout << "nilai a: " << a << endl;
	cout << "nilai b: " << b[0] << ", " << b[1] << " dan " << b[2] << endl;
	cout << "nilai c: " << c << endl;
	cout << "nilai d: " << d[0] << " dan " << d[1] << endl;
	cout << "nilai e: " << e << endl;

	return 0;
}
