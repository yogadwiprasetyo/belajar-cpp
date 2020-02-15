#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t arraySize = 10;

void printArray(array <int, arraySize> &angka){
	cout << "Array: ";
	for(int &a : angka){
		cout << a << " ";
	}
		cout << endl;
}

int main(){

	array <int, arraySize> angka = {9,4,5,3,2,6,7,1,0,8};
	printArray(angka);

	int angkacari;
	bool ada;

	// cara mencari nya 
	// sort dulu
	// search -> binary_search

	cout << "\nMencari angka dalam array: ";
	cin >> angkacari;
	sort(angka.begin(), angka.end());
	ada = binary_search(angka.begin(), angka.end(), angkacari);

	if(ada){
		cout << "ada" << endl;
	}else{
		cout << "tidak ada" << endl;
	}
	
	return 0;
}
