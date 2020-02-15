#include <iostream>
using namespace std;

// scope global
int a = 20;

// mengambil scope global
int ambil_global(){
	return a;
}

int main(){
	cout << "1. varaiabel global: " << a << endl;
	
	// scope local
	int a = 15;
	cout << "2. variabel main: " << a << endl;
	cout << "3. mengambil variabel global: " << ambil_global() << endl;
	{
		cout << "4. variabel main: " << a << endl;
		int a = 10; // scope block
		cout << "5. variabel block local: " << a << endl;
	}
	cout << "6. variabel main: " << a << endl;

	return 0;
}
