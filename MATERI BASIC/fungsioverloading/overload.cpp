#include <iostream>
using namespace std;

int hasil_luas(int a, int b){
	int c;
	c = a * b;
	return c;
}

int hasil_luas(int d){
	int c = d * d;
	return c;
}

double hasil_luas(double d){
	return d * d;
}

int main(){
	cout << "hasil 2 x 3: " << hasil_luas(2,3) << endl;
	cout << "hasil 2 x 2: " << hasil_luas(2) << endl;
	cout << "hasil 3.7 x 3.7: " << hasil_luas(3.7) << endl << endl;

	return 0;
}
