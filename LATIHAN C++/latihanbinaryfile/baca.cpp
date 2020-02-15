#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa{
	int NIM;
	string nama;
	string jurusan;
};

Mahasiswa ambilData(int &posisi, fstream &file){
	Mahasiswa bufferData;

	file.seekp((posisi-1)*sizeof(Mahasiswa));
	file.read(reinterpret_cast<char*>(&bufferData),sizeof(Mahasiswa));

	return bufferData;
}

int main(){
	fstream file;
	Mahasiswa dataBaca;
	file.open("haduh.bin", ios::in | ios::binary);
	int posisi = 2;
	dataBaca = ambilData(posisi,file);

	cout << dataBaca.NIM << endl;
	cout << dataBaca.nama << endl;
	cout << dataBaca.jurusan << endl;

	file.close();
	
	return 0;
}
