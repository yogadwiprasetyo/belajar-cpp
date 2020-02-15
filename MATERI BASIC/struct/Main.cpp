#include <iostream>
#include <string>

using namespace std;


// struct: data yang dibentuk oleh beberapa data

struct baju{
	string warna;
	string ukuran;
	int harga;
};

int main(){

	baju muslim;
	baju sepakbola;

	muslim.warna = "putih";
	muslim.ukuran = "XL";
	muslim.harga = 750000;

	sepakbola.warna = "merah";
	sepakbola.ukuran = "M";
	sepakbola.harga = 20000;

	cout << " baju muslim " << endl;
	cout << "-" << muslim.warna << endl;
	cout << "-" << muslim.ukuran << endl;
	cout << "-" << muslim.harga << endl;

	cout << " \n baju sepak bola " << endl;
	cout << "-" << sepakbola.warna << endl;
	cout << "-" << sepakbola.ukuran << endl;
	cout << "-" << sepakbola.harga << endl;
	
	return 0;
}