#include<stdio.h>
#include<stdlib.h>
int main ()
{
int notas[5],i,soma;
for(i=0;i<5;i++)
{
printf("Digite a nota do aluno %d: ",i);
scanf("%d",&notas[i]);
}
soma=0;
for(i=0;i<5;i++) soma=soma+notas[i];
printf("Media das notas: %d.",soma/5);

system ("pause");
return 0;
}
