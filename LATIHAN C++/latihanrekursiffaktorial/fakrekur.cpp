#include <iostream>
using namespace std;

int faktor(int n);

int main(){
	
	int angka,hasil;

	cout << "masukan nilai ke-n: ";
	cin >> angka;

	hasil = faktor(angka);
	cout << "\nhasil dari n: " << hasil << endl;
	return 0;
}

int faktor(int n){
	if(n <= 1){
		cout << n;
		return n;
	}else{
		cout << n << "*";
		return n * faktor(n - 1);
	}

	// return n <= 1 ? n : n * faktor(n - 1);
}

