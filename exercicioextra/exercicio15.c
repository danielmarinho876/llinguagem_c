#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
/*Faç um programa em C que receba o salário de 5 pessoas, calcule e mostre a média salarial delas*/
float salario,media;
int soma=0,i;
for ( i = 1; i <=5; i++)
{
    printf("\nDigite o salário da %dº pessoa: ",i);
    scanf("%f",&salario);
    soma=soma+salario;
    media=soma/5.00;
}
printf("\nA média do salário é %.2f\n",media);
    return 0;
}
