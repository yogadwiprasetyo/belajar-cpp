#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// menulis file binary 
// namaFile.write(reinterpret_cast<char*>(input),sizeof(input));

int main(){

	fstream file;
	int bahasa = 125;
	file.open("data.bin", ios::out | ios::binary);
	
	file.write(reinterpret_cast<char*>(&bahasa),sizeof(bahasa));

	file.close();

	
	return 0;
}

// // MEMBUAT FILE BINARY
	// // memanggil fstream untuk membuat file
	// fstream file;
	// // tulisan yang ingin dibuat untuk file binary
	// string kata("i love you");
	// // membuat file baru
	// file.open("secret.bin", ios::out | ios::binary);
	// // menulis file binary
	// file.write(reinterpret_cast<char*>(&kata),sizeof(kata));
	// // menutup file binary
	// file.close();