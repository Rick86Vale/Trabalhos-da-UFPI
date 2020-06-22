#include<stdlib.h>
#include<stdio.h>
int main()
{
      int A[5],B[5];
     int soma[5][5], lin, col;
     for (lin=0;lin<5;lin++)
      
        {printf("\ndigite valor A:\n");
         scanf("%d",&A[lin]);}
        for (col=0;col<5;col++)
         {printf("\ndigite o valor B:\n");
          scanf("%d",&B [col]);}
          for (col=0;col<5;col++)
          
     for (col=0;col<5;col++)
     {soma = ([lin]+[col]);
     printf("a soma e: %d\n", soma);}
      system("pause");
      return 0;
      }
