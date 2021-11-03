#include <stdio.h>
#include <string.h>
int main() {
char letra, frase[200], palavra[200];
int i, y=0, x=0;
printf("Digite uma frase: ");
fgets(frase,200,stdin);
for(i = 0; frase[i] != '\0'; i++) {
 if(frase[i] == ' ') {
  while (x < i) {
      palavra[y] = frase[x];
      y++;
      x++;
}
      palavra[y] = '\0';
      y=0;
      x++;
      printf("%s %s ", palavra, palavra);
        }
    }

while (x < i-1) {
palavra[y] = frase[x];
 y++;
 x++;
}
palavra[y] = '\0';
printf("%s %s ", palavra, palavra);

return 0;
}
