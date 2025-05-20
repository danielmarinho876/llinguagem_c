#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.*/
float salario,novosalario,valor;
printf("+-------------------------+------------+\n");
printf("|     FAIXA SALARIAL      |%% DE AUMENTO|\n");
printf("+-------------------------+------------+\n");
printf("|Até R$ 300,00            |   50%%      |\n");
printf("|R$ 300,00<x<=R$ 500,00   |   40%%      |\n");
printf("|R$ 500,00<x<=R$ 700,00   |   30%%      |\n");
printf("|R$ 700,00<x<=R$ 800,00   |   20%%      |\n");
printf("|R$ 800,00<x<=R$ 1000,00  |   10%%      |\n");
printf("|Acima de R$ 1000,00      |   5%%       |\n");
printf("+-------------------------+------------+\n");
printf("Digite o salário do funcionário: \n");
scanf("%f",&salario);
if (salario>0 && salario<=300)
{
    novosalario=salario*1.5;
    valor=novosalario;
}
else if (salario>300 && salario<=500)
{
    novosalario=salario*1.4;
    valor=novosalario;
}
else if (salario>500 && salario<=700)
{
    novosalario=salario*1.3;
    valor=novosalario;
}
else if (salario>700 && salario<=800)
{
    novosalario=salario*1.2;
    valor=novosalario;
}
else if (salario>800 && salario<=1000)
{
    novosalario=salario*1.10;
    valor=novosalario;
}
else if (salario>1000)
{
    novosalario=salario*1.05;
    valor=novosalario;
}
else{
    printf("Comando inválido, digite um valor positivo!!\n");
}
printf("\nO aumento foi %.2f,então o novo salário vai ser %.2f\n\n",valor-salario,valor);
    return 0;
}
