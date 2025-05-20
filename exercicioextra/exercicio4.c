#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int i,produto=1,n;
    printf("PROGRAMA TABUADA\n");
    printf("Digite o valor: ");
    scanf("%d",&n);
    for ( i = 1; i <=10; i++)
    {  
        produto=n*i;//
        printf("%dx%d=%d\n",n,i,produto);
    }
    

    return 0;
}
