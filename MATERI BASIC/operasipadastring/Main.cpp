#include <iostream>
#include <string>

using namespace std;

int main(){

	// menampilkan data/isi string
	string kata("yoga");
	cout << kata << endl;

	// menampilkan karakter berdasarkan index
	cout << "indeks ke 0: " << kata[0] << endl;
	cout << "indeks ke 1: " << kata[1] << endl;
	cout << "indeks ke 2: " << kata[2] << endl;
	cout << "indeks ke 3: " << kata[3] << endl;

	// merubah karakter pada index
	kata[3] = 'i';
	cout << kata << endl;

	// menyambung, concatenation
	string kata2(kata + " " + "ya");
	cout << kata2 << endl;

	string kata3("karta");
	kata2.append(" " + kata3);
	cout << kata2 << endl;

	string kata4("hiyahiya");
	kata2 += " " + kata4;
	cout << kata2 << endl;
	
	return 0;
}
