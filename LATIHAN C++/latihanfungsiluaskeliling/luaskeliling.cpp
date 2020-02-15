#include <iostream>
using namespace std;

// fungsi menghitung luas persegi panjang
double luas(double p, double l){
	double z;
	z = p * l;
	return z;
}

// fungsi menghitung keliling persegi panjang
double keliling(double p, double l){
	double y;
	y = 2 * (p + l);
	return y;
}

void tampilkan_luas(double p, double l){
	cout << "luasnya adalah: ";
	cout << luas(p,l) << endl;
}

void tampilkan_keliling(double p, double l){
	cout << "keliling nya adalah: ";
	cout << keliling(p,l) << endl;
}

int main()
{
	double p, l;

	cout << "masukan panjang: ";
	cin >> p;
	cout << "masukan lebar: ";
	cin >> l;

	tampilkan_luas(p,l);
	tampilkan_keliling(p,l);
	return 0;
}
