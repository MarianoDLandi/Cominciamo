#include <stdio.h>

int main() 
{
    int n;
      int modulo;  
        int i;

          printf("Inserisci un numero di cinque cifre: ");
            scanf("%d", &n);

                printf("Il numero e':%d\n",n);
                 
                  for(i = 10000; i > 0; i/=10){
                        modulo= (n/ i)%10;
                            printf("%d--",modulo);
                              }

                    printf("\n");

                      return 0;
}
