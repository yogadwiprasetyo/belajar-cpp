#include <iostream>
using namespace std;

// fungsi default argumen: memasukan nilai didalam fungsi

int volume(int pan = 2, int le = 3, int lu = 5);

int main(){
	cout << "hasil dari 2 x 3 x 4 : " << volume(2,3,4) << endl;
	cout << "hasil dari 2 x 3 x 5 : " << volume() << endl;
	
	return 0;
}

int volume(int pan, int le, int lu){
	int v;
	v = pan * le * lu;
	return v;
}