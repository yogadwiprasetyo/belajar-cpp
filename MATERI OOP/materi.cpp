#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
	/* MATERI OOP */
	// Materi ini berasal dari w3schools
	// https://www.w3schools.com/cpp/default.asp

	// jika ingin mencoba contoh yang ada di materi ini
	// usahakan melakukannya di file lain, 
	// karena penempatan class tidak berada di fungsi main()
	
//============================ CLASS ======================================
	/* 
	// Class syntax: 
	class NamaClass{
		identifier;
			attribute;
	};
	
	Contoh:
	// membuat class
	class Mobil{
		// penentu akses 
		public:
			// attribute class 
			string warna; 
			int harga; 
	};
	*/
//============================ OBJECT ======================================
	// Syntax:
	// NamaClass namaObject;

	// Contoh: 
	// membuat object
	// Mobil mbl;
//============================ METHOD ======================================
	/* 
	// Ada 2 cara mendefinisikan method
	// 1. di dalam class: definisi di dalam
	// 2. di luar class: deklarasi di dalam, definisi di luar 

	Contoh di dalam class:
	// membuat class
	class Mobil{
		// penentu akses 
		public: 
			// membuat method
			void inClass(optional parameter){
				cout << "ini method di dalam class";
			}
	};

	Contoh di luar class:
	// membuat class
	class Mobil{
		// penentu akses 
		public:
			// deklarasi method
			// void namaMethod(optional parameter);
			void outClass();
	};

	// definisi method
	// void NamaKelas::namaMethod(){
	//	 	code 
	// }
	void Mobil::outClass(){
		cout << "ini method di luar class";
	}
	*/
//========================= CONSTRUCTORS ===================================
	/*
	// Constructor: 
	// sebuah method spesial dipanggil ketika objek kelas dibuat
	// Sama seperti method Constructor bisa didefinisikan di luar maupun di dalam

	// syntax: 
	NamaClass(){
		code;
	}
	
	Contoh constructor:
	// membuat class
	class Mobil{
		// penentu akses 
		public:
			// attribute class
			string warna;
			int harga;
			// Constructor
			Mobil(optional parameter){
				cout << "ini constructor";
			}
	};
	*/
//========================= PENENTU AKSES ==================================
	/*
	// Di C++, ada tiga penentu akses
	// 1. public: dapat diakses dari luar class
	// 2. private: tidak dapat diakses dan dilihat dari luar class
	// 3. protected: tidak dapat diakses dari luar class, namun bisa
	// 	  			 diakses dari class bawaan

	Contoh penentu akses:
	// membuat class
	class Mobil{
		// penentu akses public
		public:
			int a;
		// penentu akses private
		private:
			int b;
	};
	*/
//========================== ENKAPSULASI ===================================
	/*
	// Enkapsulasi: menyembunyikan data "sensitif"	
	// untuk melakukan enkapsulasi, attribute dan method harus private
	// mengkases attribute dan method private, dengan get & set

	Contoh enkapsulasi:
	// membuat class
	class Mobil{
		// penentu akses private
		private:
			// private attribute
			string name;

		// penentu akses public
		public:
			// method public
			// akses attribute private
			// merubah nilai attribute
			void setName(string newName){
				name = newName;
			}
			// mengembalikkan nilai attribute 
			int getName(){
				return name;
			}
	};
	*/
//========================== INHERITANCE ===================================
	/*
	// Inheritance: pada C++, memungkinkan mewarisi attribute dan method
	// dari satu class ke class lainnya.
	// konsep warisan ada dua kategori:
	// 1. child class: class yang mewarisi dari class lain
	// 2. parent class: class yang diwarisi ke child
	// Penentu akses protected bisa diakses dengan child class

	// Inheritance class syntax:
	// ChildClass:penentuAkses ParentClass {
		code
	}
	// Multiple inheritance syntax: 
	// ChildClass:penentuAkses ParentClass, ParentClassOther {
		code
	} 
	
	Contoh inheritance:
	// parent class
	// membuat class
	class Electronics{
		// penentu akses public
		public:
			// attribute
			string warna;
			string jenis;
			string merk;
			// method 
			void info(string harga){
				cout << "electronics jenis: " << jenis << endl;
				cout << "merk: " << merk << endl;
				cout << "warna: " << warna << endl;
				cout << "harga: " << harga << endl;
			}
	};

	// child class
	// membuat class mewarisi dari class Electronics
	class Smartphone: public Electronics{
		// penentu akses public
		public:
			// attribute
			string harga;
	};
	*/
//========================== POLIMORFISME ==================================
	/*
	// Polimorfisme: melakukan satu tindakan dengan berbagai cara

	Contoh polimorfisme:
	// parent class
	// membuat class
	class Animal{
		// penentu akses public
		public:
			// method
			void sound(){
				cout << "binatang membuat suara" << endl;
			}
	};

	// child class
	// membuat class mewarisi dari class Animal
	class Anjing: public Animal{
		// penentu akses public
		public:
			// Polimorfisme
			// method 
			void soundAnjing(){
				cout << "Guk! Guk! Guk!";
			}
	};
	*/
//=========================== ABSTRAKSI ====================================
	/*
	// Abstraksi: hanya menampilkan informasi penting
	// 			  dan menyembunyikan detailnya

	Contoh Abstraksi:
	// membuat class
	class Abstrak{
		// penentu akses private
		private:
			// attribute private
			int a, b;

		// penentu akses public
		public:
			// method set attribute private
			void setAttr(int x, int y){
				a = x;
				b = y;
			}
			// Abstraksi
			// method display value attribute private
			void display(){
				cout << "a = " << a << endl;
				cout << "b = " << b << endl;
			}
	};
	*/

	return 0;
}
