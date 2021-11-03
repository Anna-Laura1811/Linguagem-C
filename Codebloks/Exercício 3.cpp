#include <stdio.h>
int main(){
char caracter1, caracter2, caracter3, caracter4;
printf("Informe o primeiro caracter: ");
scanf("%c", &caracter1);
printf("Informe o segundo caracter: ");
fflush(stdin);
scanf("%c", &caracter2);
printf("Informe o terceiro caracter: ");
fflush(stdin);
scanf("%c", &caracter3);
printf("Informe o quarto caracter: ");
fflush(stdin);
scanf("%c", &caracter4);

printf("Os caracters informados foram %c%c%c%c ",caracter1,caracter2,caracter3,caracter4 );
return 0;
}




