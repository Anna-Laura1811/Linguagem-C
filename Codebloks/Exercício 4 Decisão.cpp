#include <stdio.h>
int main(){
int num;
printf ("Digite o numero: ");
scanf("%d", &num);
num=num%7;
if(num == 0)
{
    printf ("O numero pode ser divisivel por 7 ");
}
else
{
    printf ("O numero nao pode ser divisivel por 7 ");
}
return 0;
}

