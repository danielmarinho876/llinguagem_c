/*Em matemática, o número harmônico designado por Hn define-se como o enési-
mo termo da série harmônica. Ou seja: Hn=1+1/2+1/3+1/4+...+ 1\n. Apresente um programa que calcule o valor de qualquer Hn*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int n;
    float i;
    float Hn=0;
    printf("Digite o valor de n: ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        Hn=Hn+1/i;
    }
    printf("\nPortanto Hn=%f\n",Hn);
    return 0;
}
