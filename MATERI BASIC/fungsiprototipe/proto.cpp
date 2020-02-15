#include <iostream>
using namespace std;

int luas(int p, int l);
void nama(char a);

int main(){
	char a;
	cout << "hasil dari 2 x 3 : " << luas(2,3) << endl;
	nama(a);
	
	return 0;
}


int luas(int p, int l){
	return p * l;
}

void nama(char a){
	cout << "nama saya yoga dwi prasetyo";
	cout << a << endl;
	
}