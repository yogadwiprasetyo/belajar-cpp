#include <iostream>
using namespace std;

void fungsi(int *);
void kuadrat(int *);

int main(){
	int a = 5;

	cout << " nilai dari a: " << a << endl;
	cout << "addres dari a: " << &a << endl << endl;

	//fungsi(&a);
	kuadrat(&a);
	cout << " nilai dari a: " << a << endl;

	return 0;
}

void fungsi(int *xio){
	cout << " nilai dari a: " << *xio << endl;
	cout << "addres dari a: " << xio << endl;
}

void kuadrat(int *yogs){
	*yogs = *yogs * *yogs;
}