#include <iostream>
#include "multiply.h"
#include "add.h"
#include "pow.h"

int main(){

	std::cout << pow(add(multiply(2,2),4),3);
	return 0;
}