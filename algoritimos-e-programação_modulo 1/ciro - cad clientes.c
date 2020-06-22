#include <stdio.h>
#include <stdlib.h>
main()
{
printf("CADASTRO DE CLIENTES:\n");
int n1;
printf("\n DIGITE USA CREDENCIAL:");
scanf(" %d",&n1);
int n2;
if (n1==10){
printf("Escolha a operação que deseja: \n");
printf("1 - Cadastrar Pessoa \n");
printf("2 - Atualizar Cadastro \n");
printf("3 - Atuaizar credencial \n");
printf("\n");
scanf("%d",&n2);}
else
printf("\ncredencial invalida\n");
switch (n2)

{ case 1:

char n5,nome,n6,n7,n8[200];

int n4,n3;

{
printf("\nNome:");
scanf(" %[A-Z a-z 0-9]s",&n5);
printf("\nRG:");
{scanf(" %d",&n3);}
printf("\nCPF:");
scanf(" %d",&n4);

printf("\nEndereco Completo:");
scanf(" %[A-Z a-z 0-9]s",&n6);
printf("\nCidade:");
scanf(" %[A-Z a-z 0-9]s",&n7);
printf("\nUF:");
scanf(" %[A-Z a-z 0-9]s",&n8);
break;


}
if (n1!=10)
printf("credencial invalida");}
system("pause");
return (0);}
