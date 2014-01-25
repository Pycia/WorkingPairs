#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
void generator()
{
  int i; 
  srand(time(0)); 
  i = rand()%101; 
  printf("%i\n",i);  
  system("PAUSE");    
  return 0; 
}