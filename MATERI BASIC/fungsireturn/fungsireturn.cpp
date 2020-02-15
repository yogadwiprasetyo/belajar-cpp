#include <iostream>
using namespace std;


/*

 tipedata namafungsi(input){
	statement;
	return hasil;
}

*/

int kuadrat(int x){
	int y;
	y = x * x;
	return y;
}

int tambah(int a, int b){
	int c;
	c = a + b;
	return c;
}

void tampilkan(char d){
	cout << "\nsaya yoga dwi prasetyo, ingin menjadi seorang yang berguna di dunia komputer\n";
	cout << d << endl;
}

int main(){
	int input, hasil, a, b, hasil2;
	char d;

	cout << "nilai kuadrat dari: ";
	cin >> input;

	hasil = kuadrat(input);
	cout << hasil << endl; 

	
	cout << "Masukan nilai: ";
	cin >> a;
	cout << "Masukan nilai: ";
	cin >> b;

	hasil2 = tambah( a,b );
	cout << hasil2 << endl;

	tampilkan(d);
	
	return 0;
}
