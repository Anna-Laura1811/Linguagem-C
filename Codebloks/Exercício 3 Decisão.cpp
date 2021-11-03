
#include <stdio.h>
int main(){
int numero;
printf ("Digite o numero: ");
scanf("%d", &numero);
if (numero < 0)
{
   printf ("O numero indicado foi negativo ");
}
else{
    if ( numero == 0 )
    printf  ("O numero indicado foi nulo ");
else
    printf ("O numero indicado foi positivo ");
}
return 0;
}
