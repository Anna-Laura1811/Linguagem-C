#include <stdio.h>
int main(){
int idade;
printf ("Digite a idade: ");
scanf("%d", &idade);
if (idade >=5 && idade <=7)
{
   printf ("Disputara na categoria Infantil A");
}
else{
    if(idade >=8 && idade <=10)
    printf ("Disputara na categoria Infantil B");

else
    if(idade >=11 && idade <=13)
    printf ("Disputara na categoria Juvenil A");

else
    if(idade >=14 && idade <=17)
    printf ("Disputara na categoria Juvenil B");

else
printf ("Disputara na categoria Senior");
}
return 0;
}






