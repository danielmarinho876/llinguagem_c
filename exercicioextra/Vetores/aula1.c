#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int notas[6]; // aqui esse arry tem 6 posição começa em 1 e vai ate 6
    int i;
    for ( i = 1; i <6; i++)
    {
        printf("Digite a %dº nota: ",i);
        scanf("%d",&notas[i]);
    }
    
    return 0;
}
