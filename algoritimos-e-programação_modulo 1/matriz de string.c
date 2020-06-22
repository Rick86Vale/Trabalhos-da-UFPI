#include <stdio.h>
#include <stdlib.h>
int main ()
{
  char nomes[3][30];
  int lin;
  printf ("INICIANDO O LOOP DE LEITURA\n\n");
  for (lin=0;lin<3;lin++)
  {
      printf ("digite o nome:");
      gets (nomes [lin]);
      }
      printf ("\n INICIANDO O LOOP DE EXIBIÇÃO\n\n");
      for (lin=0;lin<3;lin++)
      printf ("nomes = %s \n", nomes [lin]);
      system ("pause");
      }
