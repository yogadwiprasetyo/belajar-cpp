#include <iostream>
using namespace std;

int main(){
	int a = 2;
	int b = 3;

	// false= 0; true= 1;
	
	bool hasil1, hasil2;

	// sebanding: ==
	hasil1 = (a == b); // false=0
	// tidak sebanding: !=
	hasil2 = (a != b); // true=1

	// kurang dari: <
	hasil1 = (a < b); // true=1
	// lebih dari: >
	hasil2 = (a > b); // false=0

	// kurang dari sama dengan: <=
	hasil1 = (a <= b);
	// lebih dari sama dengan: >=
	hasil2 = (a >= b);

	cout << hasil1 << endl;
	cout << hasil2 << endl;





	return 0;
}
