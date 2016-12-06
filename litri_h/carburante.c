#include "rimanente.h"
#include<stdio.h>


int main(){
  float s;
  float l;
  float km_rimaneti;
  float c;
  printf("digita serbatoio:\n");
  scanf("%f",&s);
  printf("digita litri/h:\n");
  scanf("%f",&l);
  c = rimanenti(s, l); /*qui è dove prende il valore della funzione */
  printf("I kilometri rimaneti sono:%f \n",c);

  return 0 ;
}
