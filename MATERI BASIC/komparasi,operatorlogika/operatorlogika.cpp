#include <iostream>
using namespace std;

int main(){
	int a = 5;
	int b = 8;

	bool hasil1,hasil2,hasil3;

	//not
	cout << "hasil not:\n";
	hasil1 = !( a==b );
	cout << hasil1 << endl;

	// and (&&) = kedua nilai harus benar
	cout << "hasil and: \n";
	hasil2 = !( a == b ) and ( a == 5 ); // true and true =1
	cout << hasil2 << endl;
	hasil2 = ( a == b ) and ( b == 8 ); // false and true =0
	cout << hasil2 << endl;
	hasil2 = ( a == 5 ) && ( a == b ); // true and false =0
	cout << hasil2 << endl;
	hasil2 = ( a == b ) && ( b == 5 ); // false and false =0
	cout << hasil2 << endl;
	
	// or (||) = salah satu nilai true hasilnya akan true
	cout << "hasil true: \n";
	hasil3 = !( a == b ) or ( a == 5 ); // true and true =1
	cout << hasil3 << endl;
	hasil3 = ( a == b ) or ( b == 8 ); // false and true =1
	cout << hasil3 << endl;
	hasil3 = ( a == 5 ) || ( a == b ); // true and false =1
	cout << hasil3 << endl;
	hasil3 = ( a == b ) || ( b == 5 ); // false and false =0
	cout << hasil3 << endl;





	return 0;
}
