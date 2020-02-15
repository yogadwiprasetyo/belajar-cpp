#include <iostream>
using namespace std;

// tidak disarankan untuk dipakai fibonacci
int fibonacci(int n);

int main(){
	int angka,hasil;

	cout << "menghitung fibonacci ke : ";
	cin >> angka;
	hasil = fibonacci(angka);

	cout << "hasil dari fibonacci: " << hasil << endl;
	return 0;
}

int fibonacci(int n){
	if((n == 0)||(n == 1)){
		return n;
	}else{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

