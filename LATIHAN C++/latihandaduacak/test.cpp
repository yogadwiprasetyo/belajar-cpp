#include <iostream>
using namespace std;

int main(){

	char huruf;
	cout << "Masukan satu huruf: ";
	cin >> huruf;

	if( huruf >= 'A' || huruf <= 'Z' ){
		cout << "yang anda masukan huruf besar" << endl;
	} else if ( huruf >= 'a' || huruf <= 'z' ){
		cout << "yang anda masukan huruf kecil" << endl;
	} else if ( huruf >= '0' || huruf <= '9' ){
		cout << "yang anda masukan angka" << endl;
	} else {
		cout << "yang anda masukan bukan alpha numeric" << endl;
	}

	cin.get();
	return 0;
}

