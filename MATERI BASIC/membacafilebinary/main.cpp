#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// membaca file binary 
// namaFile.read(reinterpret_cast<char*>(input),sizeof(input));

int main(){

	fstream file;
	int hasil;
	file.open("data.bin", ios::in | ios::binary);
	
	file.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));

	cout << hasil << endl;
	
	file.close();

	
	return 0;
}


/*fstream file;
	int bahasa = 12534;
	file.open("data.bin", ios::out | ios::binary);
	
	file.write(reinterpret_cast<char*>(&bahasa),sizeof(bahasa));

	file.close();*/

// // MEMBACA FILE BINARY
	// // memanggil fstream untuk membaca file binary
	// fstream file;
	// // membuat tempat untuk menampung isi file binary
	// int isifile;
	// // membuka file binary
	// file.open("tgllahir.bin", ios::in | ios::binary);
	// // membaca file binary
	// file.read(reinterpret_cast<char*>(&isifile),sizeof(isifile));
	// // menampilkan isi file binary
	// cout << isifile << endl;
	// // menutup file
	// file.close();