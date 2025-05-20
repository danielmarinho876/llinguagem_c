#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,cont=0,fatorial;
    printf("Conta de 1 ate: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        fatorial = 1.0;
        for (int j = 1; j <= i; j++) {
            fatorial *= j;
            printf("%d ",fatorial);
        }
    }
    return 0;
}
