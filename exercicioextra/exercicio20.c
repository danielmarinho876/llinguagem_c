#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for ( j = 1; j <=10; j++)//aqui repete  a linha
    {
    for ( i = j; i <=10; i++)//aqui repete a coluna
    {
            printf("%d ",i);
    }
    printf("\n");
}

    return 0;
}
