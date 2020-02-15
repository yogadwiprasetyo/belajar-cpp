// memanggil fungsi cout()
#include <iostream>
// memanggil fungsi rand
// #include <cstdlib>
using namespace std;

int main(){
	char lanjut;

	while( true ){
		cout << "lempar dadu (y/n) : ";
		cin >> lanjut;
	
		if( lanjut == 'y' ){
			cout << 1 + (rand() % 12) << endl;
		}else if( lanjut == 'n' ){
			break;
		} else {
			cout << "Warning: hanya bisa ketik y dan n !!!\n";
		}
	}

	cout << "Terima Kasih sudah bermain :)" << endl;
	return 0;
}


// Program dadu acak dari 1 - 12.

// membuat perulangan dadu

// melakukan kondisi statement inputan user

// akhir dari program 
