#include<stdlib.h>
#include<stdio.h>
main()
{
      float tabela[4][3];
     float soma=0.0, media;
     char lin;
     int col;
      for (lin=0;lin<5;lin++)
      
        {printf("\ndigite o nome do aluno:\n");
         scanf("%s",&tabela[lin]);}
        for (col=0;col<4;col++)
         {printf("\ndigite a 1 nota dos alunos:\n");
          scanf("%d",&tabela [col]);}
          for (col=0;col<4;col++)
          {printf("\ndigite a 2 nota dos alunos:\n");
          scanf("%d",&tabela [col]);
        
          }
     for (col=0;col<4;col++)
     {soma=soma+col++)/8;
     printf("a media e%d\n",soma);}
      system("pause");
      return 0;
      }
