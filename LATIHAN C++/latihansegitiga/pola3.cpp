#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Masukan panjang pola:";
	cin >> n;

	cout << "pola 5:\n\n";
	for (int i = 1; i <= n; ++i){
		for( int j = n; j > i; j--){
		 	cout <<" ";
		}

		for( int k = 1; k <= (2*i-1); k++){
			cout <<"*";
		}
		cout << endl;
	}

	cout << "pola 6:\n\n";
	for (int i = 1; i <= n; ++i){
		for (int k = 1; k < i; ++k){
			cout << " ";
		}

		for (int j = n; j >= (2*i-n) ; --j){
			cout << "*";
		}
		cout << endl;
	}

	cout << "pola 7:\n\n";
	for (int i = 1; i <= n; ++i){
		for( int j = n; j > i; j--){
		 	cout <<" ";
		}

		for( int k = 1; k <= (2*i-1); k++){
			cout <<"*";
		}
		cout << endl;
	}
	for (int i = 2; i <= n; ++i){
		for (int k = 1; k < i; ++k){
			cout << " ";
		}

		for (int j = n; j >= (2*i-n) ; --j){
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}