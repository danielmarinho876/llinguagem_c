/*Faça um programa que exiba a quanto múltiplos de 3 e 5 existe de 1 a 1000*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int i,soma=0, cont=0;
    for ( i = 1; i <=15; i++)
    {
      if (i%3==0 && i%5==5)
      {
        cont=cont+1;
      }
    }
    printf("%d ",cont);
    return 0;
}

