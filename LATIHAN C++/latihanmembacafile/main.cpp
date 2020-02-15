#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

	string reading,maha;
	bool isData = false;
	string nama;
	double IPK;


	ifstream fileLatihan;
	fileLatihan.open("latihan.txt");

	while(!isData){
		getline(fileLatihan, maha);
		reading.append("\n" + maha);
		if(maha == "data:"){
			isData = true;
		}
	}

	cout << reading << endl;

	getline(fileLatihan, maha);
	cout << maha << endl;
	int jumlah = 0;
	while(!fileLatihan.eof()){
		fileLatihan >> nama;
		fileLatihan >> IPK;

		cout << nama << "\t" << IPK << endl;
		jumlah++;
	}

	cout << "jumlah data = " << jumlah << endl;

	
	return 0;
}

/*ofstream fileLatihan;

	fileLatihan.open("latihan.txt");
	fileLatihan << "Ini daftar IPK mahasiswa.\n";
	fileLatihan << "berikut daftarnya: \n\n";
	fileLatihan << "data:\n";
	fileLatihan << "nama\tIPK\n";
	fileLatihan << "Yoga\t3.80\n";
	fileLatihan << "Yoga\t3.80\n";
	fileLatihan << "Yoga\t3.80\n";
	fileLatihan.close();
	*/