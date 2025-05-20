#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir:*/
int main()
{
float nota1,nota2,media;
printf("+-------------------+----------+\n");
printf("|Média aritmética   | Mensagem |\n");
printf("|-------------------|----------|\n");
printf("|    0<=x<3         | Reprovado|\n");
printf("|-------------------|----------|\n");
printf("|    3<=x<7         | Exame    |\n");
printf("|-------------------|----------|\n");  
printf("|    7<=x<=10       | Aprovado |\n");
printf("+-------------------+----------+\n"); 
printf("\n");
printf("Digite a 1º nota:\n");
scanf("%f",&nota1);
printf("Digite a 2º nota:\n");
scanf("%f",&nota2);
media=(nota1+nota2)/2;
printf("A média foi %f,",media);

if (media>=7 && media<=10 )
{
    printf("aprovado");
}
else if (media>=3 && media<7 )
{
    printf("exame");
}
else if (media>=0 && media<3)
{
    printf("reprovado");
}
else
{
    printf("Comando inválido");
}
printf("\n\n");
    return 0;
}
