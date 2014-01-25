#include <stdio.h> 
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