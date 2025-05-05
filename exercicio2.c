/* Com base na questão anterior, receba do usuário um valor positivo x e some todos os números inteiros
de 1 até x */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,soma=0,x;
    printf("PROGRAMA QUE SOMA OS NÚMEROS DE 1 A X.\n");
    printf("Soma de 1 até: ");
    scanf("%d",&x);
    for (i = 1; i <=x; i++)
    {
        //printf("%d+",i);
        soma=soma+i;
    }
    printf("\nA soma de 1 até 100 é igual %d",soma);
    printf("\n\n");

    return 0;
}
