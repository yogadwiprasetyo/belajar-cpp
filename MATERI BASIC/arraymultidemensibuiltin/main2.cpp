#include <iostream>

using namespace std;

// const = nilai pasti;

void Printarray(int *ptrArray, int baris, int kolom){
	int index = 0;
	for(int i = 0; i < baris; i++){
		cout << "[";
		for(int j = 0; j < kolom; j++){
			cout << (*ptrArray + index) << " ";
			index ++;
		}
		cout << "]" << endl;
	}
}

int main(){

	// array multidimensi[baris][kolom]
	const int baris = 2;
	const int kolom = 3;
	int arrayMD[baris][kolom] = {0,1,2,3,4,5};
	
	Printarray(*arrayMD, baris, kolom);
	
	return 0;
}
