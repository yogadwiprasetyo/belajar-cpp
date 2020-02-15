#include <iostream>
using namespace std;

// rekursif: pengulangan pada fungsi

int pangkatIterasi(int a, int b){
	int hasil = a;
	for (int i = 1; i < b; i++){
		hasil *= a;
	}
	return hasil;
}

int pangkatRekrusif(int a, int b){
	if (b <= 1){
		cout << "akhir dari rekrusif\n";
		return a;			
	}else{
		cout << "rekrusif\n";
		return a * pangkatRekrusif(a,b-1);
	}
}

int main(){

	int a;
	int b;

	cout << "angka : ";
	cin >> a;
	cout << "pangkat : ";
	cin >> b;
	cout << "hasil iterasi = " << pangkatIterasi(a,b) << endl;
	cout << "hasil rekrusif = " << pangkatRekrusif(a,b) << endl;

	return 0;
}

