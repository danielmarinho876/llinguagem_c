/** Um determinado caixa eletrônico deve fornecer o menor número possível de notas para cada pedido.
Dado um valor em reais, como determinar quantas e quais notas devem se fornecidas para que o total
de notas seja o menor possível? Exemplo: o valor de 267 reais seria convertido em 2 notas de 100, 1
nota de 50 reais, 1 nota de 10 reais, 1 nota de 5 reais e 1 nota de 2 reais. Obs.: Considere a existência
de notas de 1 real neste caixa eletrônico. **/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int valor, n100,n50,n20,n10,n5,n2,n1;
    int r100,r50,r20,r10,r5,r2;
    printf("Digite o valor para saque: ");
    scanf("%d",&valor);
    n100=valor/100;
    r100=valor%100;
    n50=r100/50;
    r50=r100%50;
    n20=r50/20;
    r20=r50%20;
    n10=r20/10;
    r10=r20%10;
    n5=r10/5;
    r5=r10%5;
    n2=r5/2;
    r2=r5%2;
    n1=r2;
    printf("A quantidade de notas\n");
    printf("Notas de 100 são %d \n", n100);
    printf("Notas de 50 são %d \n", n50);
    printf("Notas de 20 são %d \n", n20);
    printf("Notas de 10 são %d \n", n10);
    printf("Notas de 5 são %d \n", n5);
    printf("Notas de 2 são %d \n", n2);
    printf("Notas de 1 são %d \n", n1);
    printf("\n");
    return 0;
}
