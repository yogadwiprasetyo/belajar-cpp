#include <iostream>

using namespace std;

// comma operator
// (expression1, expression2);

int main(){

	int a;
	int b;
	int c;

	cout << "masukan nilai a: ";
	cin >> a;

	cout << "masukan nilai b: ";
	cin >> b; 

	c = ( a ,cout << a << endl, b ,cout << b << endl , (a+b) );
	cout << c << endl;
	
	return 0;
}
 