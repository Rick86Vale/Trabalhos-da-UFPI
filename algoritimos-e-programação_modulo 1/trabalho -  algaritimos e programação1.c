#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
       int opcao, alterar, ano=2100;
       char  titulo[99], autor [99], ed [99],cod[10];
       do{
              printf("\n\n\n\t.......TRABALHO DE ALGORITIMOS E PROGRACAO 1......\n\n\n\n\t.................Menu de opcoes..................\n\n\t\t\t1-> cadastrar\n\t\t\t2-> excluir\n\t\t\t3-> alterar\n\t\t\t4-> mostrar\n\t\t\t5-> SAIR\n\n");
              printf ("\n\t\t\t Escolha uma opcao:_");
              scanf("%d",&opcao);
                switch (opcao)
            {
                case 1:
                printf("\n\t\tVOCE ESCOLHEU CADASTRAR\n");
                printf("\t\tinsira o codigo do livro:_");
                scanf("\n%[A-Z a-z , 0-9]s", &cod);
                printf("\t\tinsira o titulo do livro:_");
                scanf("\n%[A-Z a-z , 0-9]s", &titulo);
                printf("\t\tinsira o nome do(s) autor(es):");
                scanf("\n%[A-Z a-z , 0-9]s", &autor);
                printf("\t\tinsira o nome da editora:");
                scanf("\t%[A-Z a-z , 0-9]s", &ed);

                while (ano > 2013){
                printf("\t\tinsira o ano de publicação:");
                scanf("%d", &ano);
                }

                break;

                case 2:
                printf("voce escolheu excluir\n");
                memset(&cod,0,sizeof(cod));
                memset(&titulo,0,sizeof(titulo));
                memset(&autor,0,sizeof(autor));
                memset(&ed,0,sizeof(ed));
                memset(&ano,0,sizeof(ano));
                break;

                case 3:
                     do{
                      printf(" Modificando Cadastro\n");
                      printf(" [1] - Codigo \n");
                      printf(" [2] - Titulo \n");
                      printf(" [3] - Autor\n");
                      printf(" [4] - Editora \n");
                      printf(" [5] - Ano \n");
                      printf(" [0] - Sair \n");
                      printf("\nEscolha o campo a ser alterado:");
                      scanf("%d", &alterar);
                          switch (alterar) {
                                 case 1:
                                      printf("o codigo atual eh:%s", cod);
                                      printf("\ninsira o novo cod do livro:");
                                      scanf("\n%[A-Z a-z , 0-9]s", &cod);
                                      break;

                                 case 2:
                                       printf("o titulo atual eh:%s", titulo);
                                       printf("\ninsira o titulo do livro:");
                                       scanf("\n%[A-Z a-z , 0-9]s", &titulo);
                                       break;

                                 case 3:
                                      printf("o nome atual do autor eh:%s", autor);
                                      printf("\nnsira o nome do autor(es):");
                                      scanf("\n%[A-Z a-z , 0-9]s", &autor);
                                      break;

                                 case 4:
                                      printf("Editora atual eh:%s", ed);
                                      printf("\ninsira o nome da editora:");
                                      scanf("\n%[A-Z a-z , 0-9]s", &ed);
                                      break;

                                 case 5:
                                      printf("O ano atual eh:%s", ano);
                                      printf("\ninsira o ano de publicação:");
                                      scanf("\n%[A-Z a-z , 0-9]s", &ano);
                                      break;
                                 case 0:
                                      printf("\nVoltando ao menu principal!\n\n");
                                      break;
                                      default:
                                      printf("opcao errada!\n\n");
                                      }
                                 }while(alterar!=0);
                                  break;


                case 4:
                printf("você escolheu exibir\n");
                printf("O cod do livro:%s", cod);
                printf("\nO titulo do livro:%s", titulo);
                printf("\nO nome do autor(es):%s", autor);
                printf("\nO nome da editora:%s", ed);
                printf("\nO ano de publicação:%d", ano);
                break;

                case 5:
                printf("você escolheu SAIR\n");
                return 0;
                break;
                default:
                printf("opcao invalida, tente novamente\n");

              }

             }while(opcao !=5);

                system ("pause");
                return 0;
}
