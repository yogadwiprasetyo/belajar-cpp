#include <iostream>

using namespace std;

// union: jika satu tipe data diganti, semua akan terganti;

union data{
	int a;
	char b[4];
};

int main(){

	data union_data;

	union_data.a = 123456789;

	cout << " data a: " << union_data.a << endl;
	cout << " data b: " << union_data.b << endl;

	union_data.b[0] = 'a' ;
	union_data.b[1] = 'b' ;
	union_data.b[2] = 'c' ;
	union_data.b[3] = 'd' ;

	cout << " data a: " <<union_data.a << endl;
	cout << " data b: " <<union_data.b << endl;

	
	return 0;
}
