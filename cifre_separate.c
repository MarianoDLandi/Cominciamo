#include <stdio.h>
#include "ciclo.h"

int main() 
{
  int n;
  int modulo;  
  int i;
  int m;
  int v;

  printf("Inserisci un numero di cinque cifre: ");
  scanf("%d", &n);

  printf("Il numero e':%d\n",n);
  if(n<10000||n>99999){
    printf("Il numero non è di cinque cifre!!");
    return -1;        }

  for(i = 10000; i > 0; i/=10){
    m=ciclo(i,n);
    printf("%d     ",m);
                              }

  printf("\n");
  return 0;
}


