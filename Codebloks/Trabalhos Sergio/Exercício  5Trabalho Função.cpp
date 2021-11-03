#include <stdio.h>

float divisao(float n1)
{
float result, i;

for(i=2; i <= n1; i++)
    {
    result +=1/i;
    }
return result;
}

int main()
{
float n;
printf("Digite um numero: ");
scanf("%f",&n);
printf("\nResultado: %f", divisao(n));
return 0;

}
