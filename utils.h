#include <iostream>
#include <stdlib.h> 
#include <time.h>
int* generator()
{
  int *tab=new int[10];
  srand(time(0));
  for(int i=0; i<10; i++)
  {
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

void printTable(int *tab){

	for(int i =0; i < 10; i++){
		std::cout << tab[i] << std::endl;
	}
}

int sum(int *tab){
	double sum=0;
	for(int i =0; i < 10; i++){
		sum += tab[i];
	}
	return sum;
}