#include<stdio.h>

float rimanenti(float a , float b); /* questo è il prototipo di funione */
int main()   /* qui dovrebbe essere void */{
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

float rimanenti(float a , float b)
{
  
  int c; 
  c = a / b;
  return c ;  /*restituisce il valore di c */

}
