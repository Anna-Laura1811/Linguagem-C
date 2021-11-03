#include <stdio.h>
#include <string.h>

int main(){
char frase[100];
int i, palavras;
printf("Digite a frase: ");
gets(frase);
palavras=1;

for(i=0; frase[i]!= '\0'; i++)
{
    if(frase[i] == ' ' )
        palavras++;
}
printf("total de palavras foi %d: ",palavras);
return 0;
}
