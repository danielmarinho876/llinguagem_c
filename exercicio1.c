#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* Desenvolva um programa que some todos os números inteiros de 1 a 100 e exiba o resultado.*/
    int i,soma=0;
    printf("PROGRAMA QUE SOMA OS NÚMEROS DE 1 A 100.\n");
    for (i = 1; i <=100; i++)
    {
        //printf("%d+",i);
        soma=soma+i;
    }
    printf("\nA soma de 1 até 100 é igual %d",soma);
    printf("\n\n");

    return 0;
}
