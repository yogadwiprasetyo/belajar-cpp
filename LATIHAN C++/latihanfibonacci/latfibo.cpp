#include <iostream>
using namespace std;

int main()
{
	// f_n = f_n1 + f_n2;
	
	int n;
	int f_n;
	int f_n1;
	int f_n2;

	cout << "Selamat Datang di Program Deret\n";
	cout << "masukan nilai-n: ";
	cin >> n;

	f_n1 = 1;
	f_n2 = 0;
	f_n = f_n1 + f_n2;
	cout << f_n2 << " ";
	
	for (int i = 1; i < n; i++){
		f_n = f_n1 + f_n2; 
		f_n2 = f_n1;       
		f_n1 = f_n;		   
		cout << f_n << " ";
	}

	cout << "\nakhir dari program " << endl;

	return 0;
}
/*
while(n > 1){
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		cout << f_n << " ";
		n--;
	}
*/

