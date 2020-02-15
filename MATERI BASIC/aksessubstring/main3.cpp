#include <iostream>
#include <string>

using namespace std;
// substr(index,string);
// find(string);
// rfind(string);

int main(){

	string kata("yoga bermain sepak bola pakai sepatu");
	string kata2("otong yang besar seperti pedang yang panjang");

	cout << "1. " << kata << endl;
	cout << "2. " << kata2 << endl;

	// substring, mengambil string di tengah tengah
	cout << kata.substr(19,4) << " ";
	cout << kata2.substr(17,7) << endl;

	// mencari posisi dari substring
	cout << "posisi pada substring: " << kata.find("bola") << endl;
	cout << "posisi pada substring: " << kata2.find("seperti") << endl;

	int a = kata.find("se");
	cout << a << endl;
	cout << kata.find("se", a + 1) << endl;

	// mencari posisi dari belakang
	cout << kata2.rfind("an") << endl;
	cout << kata.rfind("a") << endl;
	
	return 0;
}