#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

template<typename T, typename U>
auto max(T a, U b){
	return (a > b) ? a : b;
}


int main(){

	int a = 14;
	string b = "test";
	double c = 15.789;
	float d = 13.3f;
	auto e = max(a,d);
	cout << a << " tipe: " << typeid(a).name() << endl;
	cout << b << " tipe: " << typeid(b).name() << endl;
	cout << c << " tipe: " << typeid(c).name() << endl;
	cout << d << " tipe: " << typeid(d).name() << endl;
	cout << e << " tipe: " << typeid(e).name() << endl;

	return 0;
}


