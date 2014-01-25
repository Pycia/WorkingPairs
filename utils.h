#include <iostream>

int* printTable(int *tab){

	for(int i =0; i < 10; i++){
		std::cout << tab[i] << std::endl;
	}
}

double sum(int *tab){
	double sum=0;
	for(int i =0; i < 10; i++){
		sum += tab[i];
	}
	return sum;
}