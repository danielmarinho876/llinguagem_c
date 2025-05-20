#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
/** Faça um programa que leia um valor N inteiro e positivo. Calcule e mostre o valor de E, conforme a
fórmula a seguir: E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N! **/
    float n,i,soma=0 ,fatorial=1;
    do
    {
    printf("Digite um valor: ");
    scanf("%f",&n);
    } while (n<=0);// se o usuario digita um valor menor que zero ocorre a repetição 
    for ( i = 1; i<=n; i++)
    {
        fatorial=fatorial*i;
        soma=soma+1/fatorial;
    }
   // printf("%.0f!= %.0f",n,fatorial);
     printf("E=%f",soma);
    return 0;
}
