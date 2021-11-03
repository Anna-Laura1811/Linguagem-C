#include <stdio.h>
#include <string.h>
int main(){
char frase[50];
printf("Digite a frase: ");
gets(frase);
for (int i = 0; i < strlen(frase); i++)
{
if (frase[i] == ' ')
{
    printf("\n");
}
else
{
printf("%c",frase[i]);
}
}
return 0;
}






