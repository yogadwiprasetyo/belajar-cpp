#include <iostream>
#include <string>
 using namespace std;


 	struct aktor{
 		string nama;
 		int tahunLahir;
 	};

 	struct film{
 		string judul;
 		string genre;
 		int tahun;
 		
 		// struct aktor
 		aktor namaPemain1;
 		aktor namaPemain2;
 		aktor namaPemain3;
 	};

 int main(){

 	aktor aktor1, aktor2, aktor3;
 	film film1, film2;

 	// buat aktor1
 	aktor1.nama = "Yoga Dwi Prasetyo";
 	aktor1.tahunLahir = 2001;

 	// buat aktor2
 	aktor2.nama = "Sakinah Indah Permaisuri";
 	aktor2.tahunLahir = 2003;

 	// buat aktor3
 	aktor3.nama = "Bunga Permatasari";
 	aktor3.tahunLahir = 2006;


 	// buat film 1
 	film1.judul = "ada apanya dia";
 	film1.genre = "action";
 	film1.tahun = 2010;
 	film1.namaPemain1 = aktor1;
 	film1.namaPemain2 = aktor2;

 	// buat film 2
 	film2.judul = "tembakan dahsyat";
 	film2.genre = "percintaan";
 	film2.tahun = 2015;
 	film2.namaPemain1 = aktor1;
 	film2.namaPemain2 = aktor2;
 	film2.namaPemain3 = aktor3;

 	cout << "film 1\n" << endl;
 	cout << "judul: " <<film1.judul << endl;
 	cout << "genre: " <<film1.genre << endl;
 	cout << "tahun: " <<film1.tahun << endl;
 	cout << "aktor utama: " << film1.namaPemain1.nama << endl;
 	cout << "tahun lahir: " << film1.namaPemain1.tahunLahir << endl;
 	cout << "aktor kedua: " << film1.namaPemain2.nama << endl;
 	cout << "tahun lahir: " << film1.namaPemain2.tahunLahir << endl << endl;
 	
 	cout << "film 2\n" << endl;
 	cout << "judul: " <<film2.judul << endl;
 	cout << "genre: " <<film2.genre << endl;
 	cout << "tahun: " <<film2.tahun << endl;
 	cout << "aktor utama: " << film2.namaPemain1.nama << endl;
 	cout << "tahun lahir: " << film2.namaPemain1.tahunLahir << endl;
 	cout << "aktor kedua: " << film2.namaPemain2.nama << endl;
 	cout << "tahun lahir: " << film2.namaPemain2.tahunLahir << endl;
 	cout << "aktor ketiga: " << film2.namaPemain3.nama << endl;
 	cout << "tahun lahir: " << film2.namaPemain3.tahunLahir << endl;


 	return 0;
 }
 