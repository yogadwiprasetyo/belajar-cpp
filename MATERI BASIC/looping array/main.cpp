#include <iostream>
using namespace std;

int main(){

	// for loop untuk C++ 11 keatas
	// for khusus array

	/*
		for(variable deklarasi : array){
			statemen;
		}
	*/
	
	int arrayLP[10] = {0,1,2,3,4,5,6,7,8,9};
	int ArrayYG[5] = {0,1,2,3,4};

	for(int nilai : arrayLP){
		cout << "addres: " << &nilai << " nilainya: " << nilai << endl;
	}

	cout << endl;
	
	// memanipulasi array menggunakan reference
	for(int &nilaiAr : arrayLP){
		nilaiAr *= 5;
	}

	cout << endl;
	for(int &nilaiAr : arrayLP){
		cout << "addres: " << &nilaiAr << " nilainya: " << nilaiAr << endl;
	}

	return 0;
}
