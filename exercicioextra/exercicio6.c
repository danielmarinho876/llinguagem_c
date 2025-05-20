#include <stdio.h>
#include <stdlib.h>
int main()
{
    /** Escreva um programa que lê um valor n interiro e porsitivo e que calcula a seguinte soma:
     S= 1+1/2+1/3+1/4+...+1/n;**/
     float n=0,soma=0;
     float i;
     printf("PROGRAMA S=1+1/2+1/3+1/4+...+1/n");
     do
     {
        printf("\n\nDigite um número: ");
        scanf("%f",&n);
     } while (n<=0);
    for ( i = 1; i<=n; i++)
    {  
        soma=soma+1/i;
        //printf("%.0f ",i);
    }
    
     printf("\n A soma é %f",soma);
     
    return 0;
}