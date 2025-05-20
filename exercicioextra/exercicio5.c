#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    /** construa um programa que apresente o valor de H, sendo H calculadora por: H=1+2+3+4+...+N. O valor de N será apresentada pelo usuário **/
    int N,i=0, soma=0;
    printf("Digite o valor de N: ");
    scanf("%d",&N);
    while (i<N)
    {
        i=i+1;
        soma=soma+i;
    }
    printf("\nA soma é %d ",soma);
    return 0;
}
