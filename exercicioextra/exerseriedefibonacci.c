/*Série de Fibonacci*/
#include <stdio.h>
 int main(int argc, char const *argv[])
 {
    int i=0,f1=1,f2=1,inicial=0,termo ,aux=0;
    printf("SÉRIE DE fIBONACCI\n");
    printf("Quantos termos você que imprimir: ");
    scanf("%d",&termo);
    printf("\n%d %d ",f1,f2);
    while (i<termo)
    {
        inicial=f1+f2;
        aux=f1;
        f1=inicial;
        f2=aux;
        i++;
        printf("%d ",inicial);
    }
    printf("\n");
    return 0;
 }
 