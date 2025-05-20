/* Faça um programa que exiba a soma de todos os números naturais abaixo de
1.000 que são múltiplos de 3 ou 5. */
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, soma=0;
    for ( i = 1; i <=1000; i++)
    {
        if (i%3==0 || i%5==0)
        {
            soma=soma+i;
        }    
    }
    printf("A soma dos multiplos de 3 ou 5 é %d\n",soma);
    return 0;
}
