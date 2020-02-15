#include <iostream>
using namespace std;

int main(){
	int a;

	cout << "masukan nilai A dengan angka 5: " << endl;
	cin >> a;

	if (a == 5){
		cout << "nilai yang anda masukan benar" << endl;
	}else{
		cout << "nilai yang anda masukan salah!!" << endl;
	}

	cout << "nilai yang anda masukan: " << a << endl;

	return 0;
}
