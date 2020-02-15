#include <iostream>
using namespace std;

int main()
{
	// aritmatika (+ - * / %)
	int a = 8;
	int b = 5;

	int hasil;

	// cara pertama 
	//cout << a + b << endl;

	// cara kedua 
	// penjumlahan
	hasil = a + b;
	cout << "perhitungan dari: " << a << " + " << b << " = " << hasil << endl;

	// pengurangan
	hasil = a - b;
	cout << "perhitungan dari: " << a << " - " << b << " = " << hasil << endl;

	// perkalian
	hasil = a * b;
	cout << "perhitungan dari: " << a << " x " << b << " = " << hasil << endl;

	// pembagian
	hasil = a / b;
	cout << "perhitungan dari: " << a << " / " << b << " = " << hasil << endl;

	// modulus
	hasil = a % b;
	cout << "perhitungan dari: " << a << " % " << b << " = " << hasil << endl;

	// urutan penghitungan
	hasil = (a + b) * b;
	cout << "perhitungan dari: " << "( " << a << " + " << b << " )" << " x " << b << " = " << hasil << endl;

	return 0;
}
