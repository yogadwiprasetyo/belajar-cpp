#include <iostream>
#include "bersama.h"
#include "foo.h"
#include "bar.h"

// // ifdef
// #ifdef FOO
// 	#define TEST_FOO "foo ada"
// #else
// 	#define TEST_FOO "foo tidak ada"
// #endif

// // ifndef
// #ifndef FOO
// #define FOO "foo lama" 
// #endif

// pragma once


using namespace std;

int main(){
	Mahasiswa mahasiswa;
	mahasiswa.NIM = 10;
	cout << mahasiswa.NIM << endl;
	
	return 0;
}
