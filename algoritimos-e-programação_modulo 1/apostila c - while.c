#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int mes;
    printf ("digite o mes: ");
    scanf ("%d", &mes);
    while ((mes<1)|| (mes>12));
    {
          printf ("digitação errada! Digite de novo.");
          printf ("digite o mes: ");
          scanf ("%d", &mes);
          }
          system ("pause");
          return 0;        
}
    
