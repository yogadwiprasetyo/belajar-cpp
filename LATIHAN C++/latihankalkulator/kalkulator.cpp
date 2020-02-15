#include <iostream>
using namespace std;

int main()
{
	int a,b,hasil;
	char aritmatika;


	cout << "\nSELAMAT DATANG DI PROGRAM KALKULATOR SEDERHANA \n\n";
	cout << "diprogram ini, tekan ENTER untuk melanjutkan \n" << endl;


	// masukan input user
	cout << "Masukan angka pertama: ";
	cin >> a; 
	

	cout << "Pilih operator  +, -, *, / : ";
	cin >> aritmatika;
	

	cout << "Masukan angka kedua: ";
	cin >> b;

	cout << a << " " << aritmatika << " " << b << endl;	


	// penjumlahan dari input user
	switch(aritmatika){
		case '+': hasil = a + b;
		break;
		case '-': hasil = a - b;
		break;
		case '*': hasil = a * b;
		break;
		case '/': hasil = a / b;
		break;
	default: cout << "Operator yang anda masukan salah !!!" << endl;
	}
	cout << "hasilnya " << "= " << hasil << endl; 
	cout << "\n\nTerima Kasih telah menggunalan kalkulator ini :)" << endl;


	return 0;
}



/*
if (aritmatika == '+'){
	hasil = a + b;
}else if(aritmatika == '-'){
	hasil = a - b;
}else if(aritmatika == '*'){
	hasil = a * b;
}else if(aritmatika == '/'){
	hasil = a / b;
}else{
	cout << "operasi yang dimasukan tidak sesuai" << endl;
}
*/