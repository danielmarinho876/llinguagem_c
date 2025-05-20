#include <stdio.h>
#include <stdlib.h>
int main()
{
    /** Escreva o algoritmo que leia os valores n1 e n2 e imprima o intervalo fechado entre esses dois valores **/
    int n1,n2,i;
   printf("PROGRAMA QUE LER DOIS VALORES N1 E N2 E IMPRIMA O INTERVALO FECHADO ENTRE ESSES DOIS VALORES\n");
   printf("\nDigite o valor de n1: ");
   scanf("%d",&n1);
   printf("\nDigite o valor de n2: ");
   scanf("%d",&n2);
   if (n1>n2)
   {
    for ( i = n2;i<= n1; i++)
    {
        printf("%d, ",i);
    }
   }
   else if(n2>=n1)
     for ( i = n1; i<=n2; i++)
     {
        printf("%d, ",i);
     }
     
   
    return 0;
}
