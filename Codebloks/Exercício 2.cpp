#include <stdio.h>
int main(){
int num2;
float num,resultado;
printf("Programa que calcula um numero real por numero inteiro\n");
printf("Informe o numero real: ");
scanf("%f", &num);
printf("Informe o numero inteiro: ");
fflush(stdin);
scanf("%d", &num2);
resultado = num / num2;
printf("O resultado da divisao foi %f ",resultado);
return 0;
}
