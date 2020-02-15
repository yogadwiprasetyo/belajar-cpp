#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

	// ios::in
	// ios::ate = mulai dari akhir file
	// ios::binary 

	string output,buffer;
	bool isData = false;
	int no;
	string nama;

	ifstream Myfile;
	Myfile.open("data.txt");

	while(!isData){
	getline(Myfile,buffer);
	output.append("\n" + buffer);
	if(buffer == "data"){
		isData = true;
	   }
	}
	cout << output << endl;

	getline(Myfile,buffer);
	cout << buffer << endl;
	int jumlah_data = 0;
	while(!Myfile.eof()){
		Myfile >> no;
		Myfile >> nama;

		cout << no << "\t" << nama << endl;
		jumlah_data++;
	}

	cout << "\n jumlah data = " << jumlah_data << endl;
	return 0;
}
