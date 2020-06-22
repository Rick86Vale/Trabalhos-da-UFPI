#include <stdio.h>
#include <stdlib.h>

int main()
{
int num = 0, i;

printf("digite um numero (1-10):_ "); 
scanf("%d",&num);

printf("\n ****** Tabuada do numero_ %d ",num);
printf("*********\n\n\n ");

for (i = 1; i <= 10; i++)
{
printf(" %02d X %02d = %03d\n",i,num,i*num);
}
printf("\n\n");
system("PAUSE"); return 0;
}
