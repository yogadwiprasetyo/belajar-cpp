#include <iostream>
using namespace std;

int main(){
	int a = 1;
	while( a <= 10){
		a++;
		if ( a == 5 ){
			//continue;
			break;
		}
		cout << "berhasil ";
		cout << a << endl;
	}

	for (int i = 1; i <=10; ++i){
		if ( i == 5 ){
			//break;
			continue;
		}
		cout << i << endl;
	}

	return 0;
}
