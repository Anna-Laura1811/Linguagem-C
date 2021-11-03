#include <stdio.h>
int main(){
int valor;
printf ("Digite o valor: ");
scanf("%d", &valor);
if (valor > 20)
{
    printf ("O numero indicado foi maior que 20");
}
else{
    if(valor==20)
    printf ("O numero indicado foi igual a 20 ");

else
    printf ("O numero indicado foi menor que 20");
}
return 0;
}
