#include <iostream>
#include <array>

using namespace std;


int main(){
 	
 	int nilai[5];
	nilai[0] = 0;
	nilai[1] = 1;
	nilai[2] = 2;
	nilai[3] = 3;
	nilai[4] = 4;

	
	cout << "nilai dari array : " << nilai[0] << endl;
	cout << "nilai dari array : " << nilai[1] << endl;
	cout << "nilai dari array : " << nilai[2] << endl;
	cout << "nilai dari array : " << nilai[3] << endl;
	cout << "nilai dari array : " << nilai[4] << endl << endl;

	int *abc = nilai;
	*(abc + 0) = 5;
	nilai[4] = 9;

	cout << "nilai dari array : " << nilai[0] << endl;
	cout << "nilai dari array : " << nilai[1] << endl;
	cout << "nilai dari array : " << nilai[2] << endl;
	cout << "nilai dari array : " << nilai[3] << endl;
	cout << "nilai dari array : " << nilai[4] << endl << endl;

	cout << "ukuran array : " << sizeof(nilai) << " byte" << endl;
	cout << "jumlah member array : " << sizeof(int) << endl;
	
 	return 0;
 } 