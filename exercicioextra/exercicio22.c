/* Considere um programa que captura um valor inteiro fornecido via teclado e imprime uma mensagem informando se o número inserido e par ou ímpar*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int num;
  printf("Digite um número interiro positivo: ");
  scanf("%d",&num);
  if (num%2==0)
  {
    printf("O número %d é par\n",num);
  }
  else {
  printf("O número %d é ímpar\n",num);
}
    return 0;
}
