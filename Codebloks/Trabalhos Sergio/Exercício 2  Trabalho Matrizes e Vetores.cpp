#include <stdio.h>
#include <string.h>
int main()
{
char frase[300];
int i;
printf("Digite uma frase: ");
gets(frase);
for(i = 0; frase[i] != '\0'; i++)
    {
        if( frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U' || frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')

    {
        frase[i] = '*';
        }
    }
printf("%s",frase);
return 0;
}
