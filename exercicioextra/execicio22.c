/* Faça um programa que calcule e escreva o valor de S:*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    float i;
    float s=0;

    for ( i = 1; i <=55; i++)
    { 
      s=s+(2*i-i)/i;  
      
    }
    printf("\nS = %f",s);
    return 0;
}
