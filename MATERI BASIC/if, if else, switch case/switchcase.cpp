#include <iostream>
using namespace std;

int main(){
	int a;

	cout << "masukan nilai a dari 1-5: " << endl;
	cin >> a;

	switch(a){
		case 1: 
			cout << "nilai yang anda masukan: " << a << endl;
			break;
		case 2: 
			cout << "nilai yang anda masukan: " << a << endl;
			break;
		case 3:
			cout << "nilai yang anda masukan: " << a << endl;
			break;
		case 4: 
			cout << "nilai yang anda masukan: " << a << endl;
			break;
		case 5: 
			cout << "nilai yang anda masukan: " << a << endl;
			break;
	default: cout << "nilai yang anda masukan tidak ditemukan !!" << endl;
	}

	return 0;
}
