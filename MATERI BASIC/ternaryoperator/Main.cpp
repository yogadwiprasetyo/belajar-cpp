#include <iostream>
#include <string>

using namespace std;

	// ternary operator = ?
	// kondisi ? hasil1 : hasil2

int main(){

	
	int a = 5;
	int b;
	string hasil1("TRUE");
	string hasil2("FALSE");
	string output;

	cout << "Masukan nilai b: ";
	cin >> b;

	output = (a < b) ? hasil1 : hasil2;

	cout << output << endl;
	
	return 0;
}
