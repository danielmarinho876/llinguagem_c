/* Faça um algoritmo que leia um número inteiro diferente de zero e diga se este é positivo ou negativo */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d",&num);
    if (num>0){
        printf("O número %d é positivo!\n",num);
    }
    else if(num==0){
        printf("O número %d não é positivo nem negativo!\n",num);
    }
    else {
        printf("O número %d é negativo!\n",num);
    }
    return 0;
}
