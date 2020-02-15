#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void PrintBinary(unsigned short val, string nama){
	cout << nama << " = " << bitset<8>(val) << endl;
}

int main(){

	unsigned short a = 6;
	unsigned short b = 10;
	unsigned short c;

	cout << "& = Bitwise AND" << endl;
	c = a & b;
	PrintBinary(a,"a");
	PrintBinary(b,"b");
	PrintBinary(c,"c");

	cout << "\n| = Bitwise inclusive OR" << endl;
	c = a | b;
	PrintBinary(a,"a");
	PrintBinary(b,"b");
	PrintBinary(c,"c");
	
	cout << "\n^ = Bitwise XOR eclusive OR" << endl;
	c = a ^ b;
	PrintBinary(a,"a");
	PrintBinary(b,"b");
	PrintBinary(c,"c");

	cout << "\n~ = Bitwise NOT" << endl;
	c = ~a;
	PrintBinary(a,"a");
	PrintBinary(c,"c");

	cout << "\n<< = Bitwise SHL" << endl;
	c = a << 2;
	PrintBinary(a,"a");
	PrintBinary(c,"c");

	cout << "\n>> = Bitwise SHR" << endl;
	c = a >> 1;
	PrintBinary(a,"a");
	PrintBinary(c,"c");
	return 0;
}

	// BITWISE OPERATOR 
	// &	AND Bitwise AND
	// |	OR Bitwise OR
	// ^	XOR Bitwise exclusive OR 
	// ~	NOT 
	// <<	SHL Shift Bits Left
	// >>	SHR Shift Bits Right

