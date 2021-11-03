#include <stdio.h>
int main(){
int num;
printf ("Digite o numero: ");
scanf("%d", &num);
num=num%2;
if(num == 0)
{
    printf (" O valor indicado foi par");
}
else
{
    printf ("O valor indicado foi impar");
}
return 0;
}
