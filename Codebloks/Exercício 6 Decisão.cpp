#include <stdio.h>
int main(){
float Media, nota1, nota2, nota3, nota4;
printf("Digite a nota 1 do aluno: ");
scanf("%f", &nota1);
printf("Digite a nota 2 do aluno: ");
scanf("%f", &nota2);
printf("Digite a nota 3 do aluno: ");
scanf("%f", &nota3);
printf("Digite a nota 1 do aluno: ");
scanf("%f", &nota4);
if(nota1 <0 || nota1 >10)
{
    printf("\nNota 1 nao e' valida(apenas notas de 0 a 10)\n");
}
if(nota2 <0 || nota2 >10)
{
    printf("\nNota 2 nao e' valida(apenas notas de 0 a 10)\n");
}
if(nota3 <0 || nota3 >10)
{
    printf("\nNota 3 nao e' valida(apenas notas de 0 a 10)\n");
}
if(nota4 <0 || nota4 >10)
{
    printf("\nNota 4 nao e' valida(apenas notas de 0 a 10)\n");
}
Media = (nota1+nota2+nota3+nota4) /4;
if(Media<2.5)
{
    printf("\nO conceito obtido foi E\n");
}
else
{
      if(Media >= 2.5 && Media <5.0)
        printf("\nO conceito obtido foi D\n");
else
      if(Media >= 5.0 && Media <7.0)
        printf("\nO conceito obtido foi C\n");
else
      if(Media >= 7.0 && Media <8.5)
        printf("\nO conceito obtido foi B\n");
else
      if(Media > 8.5)
        printf("\nO conceito obtido foi A\n");
}

    return 0;
}

