#include <stdio.h>
#include <stdlib.h>
int main()
{
/*Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um pro-
grama que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de
investimento, de acordo com o tipo de investimento.*/
int opcao;
float invertimento,valor;
printf("+------+--------------------+-------------------+\n");
printf("| Tipo |   Descrição        | Rendimento mensal |\n");
printf("+------+--------------------+-------------------+\n");
printf("|   1  |Poupança            |       3%%          |\n");
printf("+------+--------------------+-------------------+\n");
printf("|   2  |Fundo de renda fixa |       5%%          |\n");
printf("+------+--------------------+-------------------+\n");
printf("Escolha uma das opções:\n");
scanf("%d",&opcao);
printf("O valor do investimento:\n");
scanf("%f",&invertimento);
if (opcao==1)
{
   valor=invertimento*1.03; 
}
else if (opcao==2)
{
   valor=invertimento*1.05; 
}
else{
    printf("Comando inválido\n");
}
printf("O valor vai ser %.3f\n\n",valor);
return 0;
}
