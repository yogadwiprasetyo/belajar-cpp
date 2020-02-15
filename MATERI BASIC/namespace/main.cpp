#include <iostream>
#include "yoga.h"

void fungsi(){
	std::cout << "fungsi didalam void" << std::endl;
}

int main(){
	fungsi();
	std::cout << yoga::a << std::endl;
	yoga::fungsi();
	yoga::cout(10);
	
	return 0;
}