#include <iostream>
#include <string>

using namespace std;

int main(){

	string kata("saya adalah penguasa di tempat ini");
	string kata2("ceo bernama yoga dwi prasetyo");

	cout << "1. " << kata << endl;
	cout << "2. " << kata2 << endl << endl;

	// swap string
	// swap(namastring)
	kata.swap(kata2);
	cout << "swap string" << endl;
	cout << "1. " << kata << endl;
	cout << "2. " << kata2 << endl << endl;

	// replace string, mengganti kalimat
	// replace(index, panjang, kata);
	kata2.replace(0,4,"dia");
	kata.replace(0,3,"yang");
	cout << "replace string" << endl;
	cout << "1. " << kata << endl;
	cout << "2. " << kata2 << endl << endl;

	// insert string
	// insert(index, string);
	kata.insert(13,"adalah ");
	cout << "insert string" << endl;
	cout << "1. " << kata << endl;
	cout << "2. " << kata2 << endl << endl;




	return 0;
}
