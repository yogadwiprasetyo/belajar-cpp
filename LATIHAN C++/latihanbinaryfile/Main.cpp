#include <iostream>
#include <fstream>
#include <string>

using namespace std;


struct Mahasiswa{
	int NIM;
	string nama;
	string jurusan;
};

Mahasiswa ambilData(int posisi, fstream &file){
	Mahasiswa bufferData;

	file.seekp((posisi-1)*sizeof(Mahasiswa));
	file.read(reinterpret_cast<char*>(&bufferData),sizeof(Mahasiswa));

	return bufferData;
}

void menulisData(Mahasiswa &data, fstream &file){
	file.write(reinterpret_cast<char*>(&data),sizeof(Mahasiswa));
}

void menulisDataByPos(int posisi, Mahasiswa &bufferData, fstream &file){
	file.seekg((posisi-1)*sizeof(Mahasiswa));
	file.write(reinterpret_cast<char*>(&bufferData),sizeof(Mahasiswa));
}

int main(){
	fstream file;
	file.open("haduh.bin", ios::trunc | ios::out | ios::in | ios::binary);

	Mahasiswa mahasiswa1,mahasiswa2,mahasiswa3,output;

	mahasiswa1.NIM = 123;
	mahasiswa1.nama = "ucup";
	mahasiswa1.jurusan = "memasak";

	mahasiswa2.NIM = 124;
	mahasiswa2.nama = "otong";
	mahasiswa2.jurusan = "menjahit";

	mahasiswa3.NIM = 125;
	mahasiswa3.nama = "ucup";
	mahasiswa3.jurusan = "mesin";

	menulisData(mahasiswa1, file);
	menulisData(mahasiswa2, file);
	menulisData(mahasiswa3, file);

	mahasiswa2.nama = "andre";
	menulisDataByPos(1,mahasiswa2, file);
	
	output = ambilData(2,file);

	cout << output.NIM << endl;
	cout << output.nama << endl;
	cout << output.jurusan << endl;

	file.close();
	
	return 0;
}

	