#include <iostream>
#include <string>

using namespace std;

int main(){

	string nama("yoga");
	string input;

	while(true){
		cout << "tebak nama awalan Y : ";
		cin >> input;

		if(input == nama){
			cout << "tebakan anda benar !!" << endl;
			break;
		}
		cout << "tebakan anda salah :( !! " << endl;
	}
	
		cout << "\n Program selesai" << endl;
	return 0;
}
