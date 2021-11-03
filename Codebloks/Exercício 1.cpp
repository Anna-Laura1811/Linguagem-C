#include <stdio.h>
int main(){
int num, num2;
printf("Programa que inverte a ordem dos numeros indicados\n");
printf("Informe o primeiro numero: ");
scanf("%d", &num);
printf("Informe o segundo numero: ");
fflush(stdin);
scanf("%d", &num2);
printf("Os numeros invertidos sao %d e %d ",num2, num);
return 0;
}
