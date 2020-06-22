#include <stdio.h>
#include <stdlib.h>


int main (){

int cont;

struct cadastro {
 
 char nome[50];
 char rua[100];
 char numero [50];
 char bairro [50];
 char cidade [100];
 long int cep, celular, telefone_fixo;
 float VlrUltimaCompra, TotaldeDebito, LimitePreAprovado;
 
 };
 
struct cadastro cliente[10];

for(cont =0; cont < 10; cont++){


 printf ("Digite o nome do cliente\n");
 gets (cliente[cont].nome);
 fflush (stdin);
 
 printf ("Digite o nome da rua do cliente\n");
 gets (cliente[cont].rua);
 fflush (stdin);
 
 printf ("Digite o nome do bairro do cliente\n");
 gets (cliente[cont].bairro);
 fflush (stdin);
 
 printf ("Digite o nome da cidade do cliente\n");
 gets (cliente[cont].cidade);
 fflush (stdin);
 
 printf ("Digite o cep da cidade do cliente\n");
 scanf ("%i", &cliente[cont].cep);
 fflush (stdin);
 
 printf ("Digite o telefone fixo do cliente\n");
 scanf ("%i", &cliente[cont].telefone_fixo);
 fflush (stdin);
 
 printf ("Digite o celular do cliente\n");
 scanf ("%i", &cliente[cont].celular);
 fflush (stdin);
 
 printf ("Digite o valor da ultima compra\n");
 scanf ("%f", &cliente[cont].VlrUltimaCompra);
 fflush (stdin);
 
 printf ("Informe o total de debito\n");
 scanf ("%f", &cliente[cont].TotaldeDebito);
 fflush (stdin);
 
 printf ("Digite o limite pre-aprovado\n");
 scanf ("%f", &cliente[cont].LimitePreAprovado);
 fflush (stdin);

}
 

}
