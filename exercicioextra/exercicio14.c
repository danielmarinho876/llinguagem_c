#include <stdio.h>
#include <stdlib.h>
int main()
{//5!=5.4.3.2.1=60;
    /** Faça um programa que leia um número N que indica quantos valores inteiros e positivos devem ser
lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial desse valor. **/
int n,i,j,quantidade;
int fatorial=1;
printf("Digite a quantidade de valores que devems ser lidos a seguir:\n");
scanf("%d",&quantidade);
for (j=1;j<=quantidade;j++)
{
    fatorial=1;
    printf("Digite um numero positivo:\n");
    scanf("%d",&n);

  for ( i = 1; i <=n; i++)
  { 
    fatorial=fatorial*i; 
  }
  printf("O seu fatorial: %d\n\n",fatorial);
}
    return (EXIT_SUCCESS);
}
