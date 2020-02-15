#include <iostream>
#include <string>

using namespace std;

// void print(int data){
// 	cout << data << endl;
// }

template<typename T>
void print(T data){
	cout << data << endl;
} 

template<typename T>
int toInt(T data){
	return int(data);
}

template<typename T, typename U>
T max(T a, U b){
	return (a > b) ? a : b;
}



int main(){

	print(5);
	print(2.34);
	print('a');

	cout << toInt(23.45) << endl;
	cout << max(20,24.45) << endl;

	print<int>(30.456);
	cout << max<double,int>(12.3,15);
	
	return 0;
}
