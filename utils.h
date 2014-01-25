#include <iostream>
#include <stdlib.h> 
#include <time.h>
int* generator()
{
  int tab[10];
  for(int i=0; i<10; i++)
  {
	  int j; 
	  srand(time(0)); 
	  tab[i] = rand()%101; 
  }
  return tab;
}
int max(int * tab)
{
	int max = tab[0];
	for(int i=0; i<10; i++)
	{
		if(tab[i]>max)
			max=tab[i];
	}
	return max;
}

int min(int * tab)
{
	int min = tab[0];
	for(int i=0; i<10; i++)
	{
		if(tab[i]<min)
			min=tab[i];
	}
	return min;
}

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