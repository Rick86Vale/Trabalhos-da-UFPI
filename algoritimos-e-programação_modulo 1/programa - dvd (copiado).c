#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
char tvideos[100];
char dvideos[50];
char gvideos[50];
char codel[50]; //tvideos= titulo dos videos
char aux[100];
int avideos;
int coden; //dvideos= diretor dos videos
}locadora; //gvideos= genero dos videos
//avideo= ano dos videos
void cadastrar(locadora *f, int *search); //codel= codigo letra
void pesquisar(locadora *f, int search); //coden= codigo numero //coden= codigo numero
void titulo(locadora *f, int search);
void genero(locadora *f,int search);
void avideo(locadora *f,int search);
void excluir(locadora *f, int search);
void alterar(locadora *f, int *search);
int main() //menu principal
{
int search=0;
int aux;
locadora f[100];
do{
clrscr();
printf("\nEscolha uma opcao:\n\n");
printf("1.Cadastrar Video\n2.Pesquisar Video\n");
printf("3.Alterar Video\n4.Excluir Video\n");
printf("5.Sair do Programa\n");
printf("\n\nOpcao Escolhida:");
scanf("%d", &aux);
if(aux==5)
{
printf("\n---------------------------------------\n");
printf("\nPressione alguma tecla para sair.....\n");
}
else
{
switch(aux)
{
case 1:
cadastrar(f, &search);
break;
case 2:
pesquisar(f, search);
break;
case 3:
alterar(f, &search);
break;
case 4:
excluir(f, search);
break;
default:
printf("Opcao Invalida!");
}
}
getch();
}while(aux != 5);
return(0);
}
void cadastrar(locadora *f, int *search) //opcao cadastrar video
{
char string[50];
int control=0;
int cont;
int control2=0;
clrscr();
fflush(stdin);
randomize();
printf("\n1.Titulo do Video:\n");
gets(f[*search].tvideos);
printf("\n2.Genero do Video:\n");
gets(f[*search].gvideos);
printf("\n3.Diretor do Video:\n");
gets(f[*search].dvideos);
do{
printf("\n4.Ano do Video:\n");
scanf("%d", &f[*search].avideos);
if(f[*search].avideos >= 1900)
control2 = 1;
else
printf("\nAno Invalido!\n");
}while(control2 == 0);
do{
f[*search].coden = random(9999);
if(f[*search].coden < 1000)
control = 1;
else
control = 0;
strcpy(f[*search].codel, "");
strncat(f[*search].codel, f[*search].gvideos, 3);
if(control == 0)
for(cont=0; cont<100; cont++)
{
if( strcmp(f[cont].codel, f[*search].codel) == 0 && f[*search].codel == f[cont].codel)
control = 1;
else
control = 0;
}
}while(control==1);
printf("\n\nCodigo do video:%s%d", f[*search].codel, f[*search].coden);
printf("\n\nATENCAO:O CODIGO E NECESSARIO PARA ALTERAR OU EXCLUIR O VIDEO!");
(*search)++;
}
void pesquisar(locadora *f, int search) //opcao pesquisar video
{
int aux;
do{
clrscr();
fflush(stdin);
printf("\nFormas de pesquisa\n");
printf("\n1.Pesquisar titulo\n2.Pesquisar ano\n");
printf("3.Pesquisar genero\n4.Voltar\n");
printf("\nOpcao Escolhida:");
scanf("%d", &aux);
if(aux==4)
{
printf("\n\n---------------------------------------\n");
printf("\nPressione alguma tecla para voltar.....\n");
}
else
{
switch(aux)
{
case 1:
titulo(f, search);
break;
case 2:
avideo(f, search);
break;
case 3:
genero(f, search);
break;
default:
printf("Opcao Invalida!");
}
}
}while(aux!=4);
}
void titulo(locadora *f,int search) //pesquisa por titulo
{
int cont;
int outro;
char tit[100];
do{
clrscr();
fflush(stdin);
printf("\nInforme o Titulo do video:\n");
gets(tit);
for(cont=0; cont < search; cont++)
{
if(strcmp(tit, f[cont].tvideos)==0)
{
printf("\n\nTitulo do Video: %s", f[cont].tvideos);
printf("\nGenero do Video: %s", f[cont].gvideos);
printf("\nDiretor do Video: %s", f[cont].dvideos);
printf("\nAno do Video: %d", f[cont].avideos);
printf("\nCodigo do Video: %s%d", f[cont].codel, f[cont].coden);
}
else
printf("\n\nVideo NAO encontrado!\n");
}
printf("\n\nDeseja pesquisar outro video?\n");
printf("\n1.Sim\n2.Nao\n");
printf("\nOpcao Escolhida:");
scanf("%d", &outro);
}while(outro == 1);
}
void genero(locadora *f,int search) //pesquisa por genero
{
int cont;
int outro;
char gen[100];
do{
clrscr();
fflush(stdin);
printf("\nInforme o Genero do video:\n");
gets(gen);
for(cont=0; cont < search; cont++)
{
if(strcmp(gen, f[cont].gvideos)==0)
{
printf("\n\nTitulo do Video: %s", f[cont].tvideos);
printf("\nGenero do Video: %s", f[cont].gvideos);
printf("\nDiretor do Video: %s", f[cont].dvideos);
printf("\nAno do Video: %d", f[cont].avideos);
printf("\nCodigo do Video: %s%d", f[cont].codel, f[cont].coden);
}
else
printf("\n\nVideo NAO encontrado!\n");
}
printf("\n\nDeseja pesquisar outro video?\n");
printf("\n1.Sim\n2.Nao\n");
printf("\nOpcao Escolhida:");
scanf("%d", &outro);
}while(outro == 1);
}
void avideo(locadora *f,int search) //pesquisa por ano
{
int cont;
int outro;
int ano;
do{
clrscr();
fflush(stdin);
printf("\nInforme o Ano do video:\n");
scanf("%d", &ano);
for(cont=0; cont < search; cont++)
{
if(ano==f[cont].avideos)
{
printf("\n\nTitulo do Video: %s", f[cont].tvideos);
printf("\nGenero do Video: %s", f[cont].gvideos);
printf("\nDiretor do Video: %s", f[cont].dvideos);
printf("\nAno do Video: %d", f[cont].avideos);
printf("\nCodigo do Video: %s%d", f[cont].codel, f[cont].coden);
}
else
printf("\n\nVideo NAO encontrado!\n");
}
printf("\n\nDeseja pesquisar outro video?\n");
printf("\n1.Sim\n2.Nao\n");
printf("\nOpcao Escolhida:");
scanf("%d", &outro);
}while(outro == 1);
}
void excluir(locadora *f, int search) // opcao excluir video
{
int cont;
char codigol[50];
int codigon;
int aux;
clrscr();
fflush(stdin);
printf("\nATENCAO:PARA EXCLUIR UM VIDEO E NECESSARIO O CODIGO DO MESMO!\n");
printf("\nInforme as 3 letras do codigo:\n");
gets(codigol);
printf("\nInforme os 4 numeros do codigo:\n");
scanf("%d", &codigon);
for(cont=0; cont < search; cont++)
{
if(strcmp(codigol, f[cont].codel)==0 && codigon==f[cont].coden)
{
printf("\n\nTitulo do Video: %s", f[cont].tvideos);
printf("\nGenero do Video: %s", f[cont].gvideos);
printf("\nDiretor do Video: %s", f[cont].dvideos);
printf("\nAno do Video: %d\n\n", f[cont].avideos);
printf("\nCodigo do Video: %s%d\n\n", f[cont].codel, f[cont].coden);
printf("\nDeseja Excluir esse video?\n1.Sim\n2.Nao\n\n");
printf("Opcao Escolhida:");
scanf("%d", &aux);
if(aux==1)
{
strcpy(f[cont].tvideos, " ");
strcpy(f[cont].gvideos, " ");
strcpy(f[cont].dvideos, " ");
strcpy(f[cont].codel, " ");
f[cont].coden=0;
f[cont].avideos=0;
printf("\nO video foi excluido com sucesso!");
break;
}
}
}
printf("\n\n---------------------------------------\n");
printf("\nPressione alguma tecla para voltar.....\n");
}
void alterar(locadora *f, int *search) // opcao alterar video
{
int cont;
char codigol[100];
int codigon;
int aux;
int control=0;
clrscr();
fflush(stdin);
printf("\nATENCAO:PARA ALTERAR UM VIDEO E NECESSARIO O CODIGO DO MESMO!\n");
printf("\nInforme as 3 letras do codigo:\n");
gets(codigol);
printf("\nInforme os 4 numeros do codigo:\n");
scanf("%d", &codigon);
for(cont=0; cont < *search; cont++)
{
if(strcmp(codigol, f[cont].codel)==0 && codigon==f[cont].coden)
{
printf("\n\nTitulo do Video: %s", f[cont].tvideos);
printf("\nGenero do Video: %s", f[cont].gvideos);
printf("\nDiretor do Video: %s", f[cont].dvideos);
printf("\nAno do Video: %d\n\n", f[cont].avideos);
printf("\nCodigo do Video: %s%d\n\n", f[cont].codel, f[cont].coden);
printf("\nDeseja Alterar esse video?\n1.Sim\n2.Nao\n\n");
printf("Opcao Escolhida:");
scanf("%d", &aux);
if(aux==1)
{
printf("\n\n");
gets(f[cont].tvideos);
printf("\n1.Novo Titulo do Video:\n");
gets(f[cont].tvideos);
printf("\n2.Novo Genero do Video:\n");
gets(f[cont].gvideos);
printf("\n3.Novo Diretor do Video:\n");
gets(f[cont].dvideos);
do{
printf("\n4.Novo Ano do Video:\n");
scanf("%d", &f[cont].avideos);
if(f[cont].avideos >= 1900)
control=1;
else
printf("\nAno Invalido!\n");
}while(control == 0);
printf("O video foi alterado com sucesso!");
}
}
}
printf("\n\n---------------------------------------\n");
printf("\nPressione alguma tecla para voltar.....\n");
system ("pause");
return 0;
}
