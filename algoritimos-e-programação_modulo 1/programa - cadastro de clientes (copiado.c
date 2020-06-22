#include<stdio.h>
#include<stdlib.h>
#define lim 30

int main(){

char nomeclientes[15], roteiro[20];
int nclientes=0,l,opcao,nroteiros=0,m[lim][lim],i,j;

do{
printf("\n****MENU*****\nDigite a OPCAO desejada: \n");
printf("1. CADASTRO UM NOVO CLIENTES.\n");
printf("2. GUIA DE ROTEIRO.\n");
printf("3. CLIENTES JA REGISTRADO EM UM DETERMINADO ROTEIRO.\n");
printf("4. GRAU DE AfINIDADE.\n");
printf("5. LISTA DE ROTEIROS DESEJADOS.\n");
printf("6. ESTATISTICAS DOS ROTEIROS.\n");
printf("0. SAIR\n\n");
printf("\nA OPCAO E: ");
scanf("%d",&opcao);
switch(opcao){
case 1: printf("\nCADASTRO DE CLIENTE.\n"); //INCOMPLETO!!//

printf("Cadastre o Nome do Cliente: ");
scanf("%s",&nomeclientes[l]);
nclientes++;
printf("\nNumero de Clientes Cadastrados: %d\n",nclientes);
break;

case 2: printf("\nLista de Roteiros Disponiveis: \n1.Sul.da.Bahia\n2.Serra Gauchas\n3.Caldas Novas.\n4.Natal.\n5.Ceara.\n");
printf("*Digite o Numero do Destino: ");
scanf("%s",&roteiro[l]);
nroteiros++;
printf("\nNumero de Roteiros Registrados: %d\n", nroteiros);

break;

case 0: return 0;
break;
default: printf("Informe uma OPCAO VALIDA!.\n");
}//case
}while(opcao=!0);

system("pause");
}//main 
