#include <iostream>
#include <string>

using namespace std;

int main(){

	string kalimatinput;

	// getline(cin, variabel);
	cout << "masukan kalimat anda: ";
	getline(cin, kalimatinput);
	cout << "kalimat yang anda masukan: " << kalimatinput << endl;

	// jumlah kata dari input

	int posisi = 0;
	int jumlah = 0;

	while(true){
		posisi = kalimatinput.find(" ", posisi + 1);
		jumlah++;
		if(posisi < 0){
			break;
		}
	}

	cout << "jumlah kata: " << jumlah << endl;
	
	return 0;
}
