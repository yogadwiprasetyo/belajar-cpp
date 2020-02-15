#include <iostream>
#include <array>

using namespace std;

int main(){

	// array<tipeData, Ukuran> nama array
	
	array<int, 6> nilai;

	for(int i = 0; i < 6; i++){
		nilai[i] = i;
		cout << "nilai [" << i << "] = " << nilai[i];
		cout << " addres : " << &nilai[i] << endl;
	}

	cout << endl;
	// ukuran array
	cout << "ukuran array : " << nilai.size() << endl;
	// addres awal dari array
	cout << "addres awal array : " << nilai.begin() << endl;
	// addres akhir dari array
	cout << "addres akhir array : " << nilai.end() << endl;
	// nilai dengan indeks
	cout << "nilai ke 2 array : " << nilai.at(1) << endl;

	return 0;
}
