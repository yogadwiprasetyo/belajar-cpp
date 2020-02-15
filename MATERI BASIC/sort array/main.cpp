#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t arraySize = 10;

void printArray(array <int, arraySize> &angka){
	cout << "Array Angka: ";
	for(int &a : angka){
		cout << a << " ";
	}
		cout << endl;
}

void printArray(array <char, arraySize> &huruf){
	cout << "Array Char: ";
	for(char &b : huruf){
		cout << b << " ";
	}
		cout << endl;
}

void printArray(array <double, arraySize> &koma);

int main(){
	array <int, arraySize> angka = {9,4,5,3,2,6,7,1,0,8};
	array <char, arraySize> huruf = {'h','a','e','j','b','d','f','c','i','g'};
	array <double, arraySize> koma = {2.2,1.1,3.5,1.0,2.1,5.1,1.5,2.7,1.3,2.9};

	printArray(angka);
	printArray(huruf);
	printArray(koma);

	cout << endl;

	sort(angka.begin(), angka.end());
	printArray(angka);
	
	sort(huruf.begin(), huruf.end());
	printArray(huruf);

	sort(koma.begin(), koma.end());
	printArray(koma);

	return 0;
}


void printArray(array <double, arraySize> &koma){
	cout << "Array Double: ";
	for(double &c : koma){
		cout << c << " ";
	}
		cout << endl;
}
