#include <iostream>
#include "utils.h"


int main(){
	int *tab = generator();
	double max = max(tab);
	double min = min(tab);
	double sum = sum(tab);
	printTable(tab);
	std::cout << max << std::endl;
	std::cout << min << std::endl;
	std::cout << sum << std::endl;
	return 0;
}