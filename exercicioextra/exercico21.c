#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    /* Escreva um programa que leia um número inteiro positivo N e em seguida impri-
ma N linhas do chamado triângulo de Floyd:
1
23
456
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21 */

    int i,j,cont=0,n;
    printf("TRIÂNGULO DE FLOYD\n");
    printf("Digite o número de linhas: ");
    scanf("%d",&n);
    ///////////
    if (n>0)
 {
    for ( j = 1; j <=n; j++)//aqui repete  a linha
    {
        printf(" ");
    for ( i = 1; i <=j; i++)//aqui repete a coluna
    {
        printf(" ");
        cont++;
            printf("%d ",cont);
    }
    printf("\n");
    }
 }
 else {
    printf("Comando inválido");
 }
    return 0;
}

