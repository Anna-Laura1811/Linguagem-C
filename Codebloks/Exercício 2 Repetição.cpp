#include <stdio.h>
int main(){
float ano_atual, salario, percentual, novo_salario, i;
printf("Informe o ano atual: ");
scanf("%d", &ano_atual);
salario = 600.00;
percentual = 1.5/100;
novo_salario = salario * (1+percentual);
for ( i=ano+1; i<=ano_atual; i++);
{
percentual=percentual*2;
novo_salario=novo_salario*(1+percentual);
printf ("\n O seu novo salario sera R$ %f ",novo_salario);
}
return 0;
}




