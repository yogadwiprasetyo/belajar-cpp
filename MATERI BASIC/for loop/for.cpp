#include <iostream>
using namespace std;

int main(){
	/* 
	for(inisialisasi; loop kondisi; increment){
	 	statement;
	}
		di for loop bisa memakai:
		-(increment)
		-(operator assignment)
		-(decrement)
		-(menambahkan variabel)

	*/
	cout << "for loop increment: \n";
	for (int i = 1; i <= 5; ++i){
		cout << i << endl;
	}

	cout << "for loop assignment: \n";
	for (int i = 1; i <= 8; i += 2){
		cout << i << endl;
	}

	cout << "for loop decrement: \n";
	for (int i = 0; i >= -5; --i){
		cout << i << endl;
	}

	cout << "for loop menambahkan variabel: \n";
	int total = 0;
	for (int i = 1; i <= 10; total += i, ++i){
		cout << i << "||" << total << endl;
	}

	return 0;
}
