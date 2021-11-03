#include <stdio.h>
int divisores(int num);
int divisores(int div)
{
int cont;
for(int i=1; i <= div; i++)
    {
if (div % i == 0)
    {
         cont++;
    }
    }
return cont;
}
int main()
{
int num;

printf("Escreva um numero: ");
scanf("%d",&num);
printf("%d",divisores(num));
return 0;
}
