// preprocesing directive
#include <iostream>

// macro mengubah variabel
#define PI 3.1456785469
#define BAHASA "Indonesia"

// macro untuk fungsi
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A > B) ? A:B )

using namespace std;

int main(){

	cout << "nilai PI= " << PI << endl;
	cout << "bahasa = " << BAHASA << endl;
	cout << "kuadrat = " << KUADRAT(15) << endl;
	cout << "max: " << MAX(2,10) << endl;

	#undef BAHASA
	#define BAHASA "Inggris"

	cout << BAHASA << endl;
	
	return 0;
}
