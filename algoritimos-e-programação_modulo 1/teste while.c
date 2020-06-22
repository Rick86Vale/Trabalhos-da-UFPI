

#include <stdlib.h>
int main()
{
    float nota, soma=0, media=0;
    int resp=1, contador=0;
    while (resp==1)
    { //esta chave inicia o comando de repetiçao wile
    printf ("digite a nota");
    scanf ("%f", &nota);
    soma=soma+nota;
    printf ("digite 1 para continuar ou digite outro valor para finalizar...");
    scanf ("%d", &resp);
    contador++; // esa linha é igual a contador=contador+1
}
media=soma/contador;
printf ("a media da turma e %.2f \n", media);
system ("pause");
return 0;
}
