#include<stdio.h>
int main()
{
int serbatoio;
int litri_orari;
int km_rimaneti;

printf("digita serbatoio:\n");
scanf("%d",&serbatoio);
printf("digita litri/h:\n");
scanf("%d",&litri_orari);
km_rimaneti=serbatoio/litri_orari;
printf("I kilometri rimaneti sono:%d \n",km_rimaneti);
return 0;
}
