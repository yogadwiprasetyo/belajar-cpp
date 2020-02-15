#include <iostream>
using namespace std;

void fungsi(int &b){
	cout << " nilai dari b: " << b << endl;
	cout << "addres dari b: " << &b << endl;
}

void kuadrat(int &nilai){
	nilai = nilai * nilai;
}

int main(){
	int a = 2;

	cout << " nilai dari a: " << a << endl;
	cout << "addres dari a: " << &a << endl << endl;

	//fungsi(a);
	kuadrat(a);
	cout << " nilai dari b: " << a << endl;

	return 0;
}
