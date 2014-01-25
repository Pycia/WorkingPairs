#include <iostream>
#include "utils.h"


int main(){
	int *tab = generator();
	int ma = max(tab);
	int mi = min(tab);
	int s = sum(tab);
	printTable(tab);
	std::cout << ma << std::endl;
	std::cout << mi << std::endl;
	std::cout << s << std::endl;
	std::cin >> ma;
	return 0;
}