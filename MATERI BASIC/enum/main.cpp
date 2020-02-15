#include <iostream>

using namespace std;

enum warna {merah, kuning, hijau, hitam, biru};

int main(){

	warna baju;

	baju = hijau;

	cout << baju << endl;

	if(baju == kuning){
		cout << "baju berwarna hijau" << endl;
	}

	return 0;
}
