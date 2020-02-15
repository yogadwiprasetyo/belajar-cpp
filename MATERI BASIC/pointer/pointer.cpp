#include <iostream>
using namespace std;

int main(){
	
	// pointer: mengambil alamat dari tipe data
	int a = 5;
	int *Pntr = &a;
	cout << " nilai dari a: " << a << endl;
	cout << "addres dari a: " << Pntr << endl << endl;

	// derefrencing
	cout << "mengambil data dari pointer: " << *Pntr << endl;

	return 0;
}
