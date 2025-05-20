#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    /*
    int i,n,f=1;
    printf("Digite um número inteiro não negativo: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("Fatoria= %d\n",f);
    */
   /*
   float i,n,f=1.0;
    printf("Digite um número inteiro não negativo: ");
    scanf("%f",&n);
    i=1.0;
    while (i<=n)
    {
        f=f*i;
        i++;
    }
    printf("Fatorial= %.0f\n",f);
    */
   float i=1.0,n,f=1.0;
   do
   {
    printf("Digite um valor inteiro não negativo: ");
    scanf("%f",&n);
   } while (n<0);
   for ( i = 1; i <n; i++)
   {
    f=f*i;
   }
   printf("Fatorial= %f\n",f);
   
   
    return 0;
}
