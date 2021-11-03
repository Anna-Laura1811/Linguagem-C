#include <stdio.h>
int main(){
int X, Y, i=0, resultado=1;
printf("Digite o valor de X: ");
scanf("%d", &X);
printf("Digite o valor de Y: ");
scanf("%d", &Y);
for ( i = 0; i < Y; i++)
{
resultado = X * resultado;
printf("\n %d elevado a %d foi %d: ",X,Y, resultado);
}

return 0;
}
