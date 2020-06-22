#include <iostream>
#include "Agenda.h"


int main () {
    char linha[] = "------------------------------------------------\n";
    agenda A;

    A.armazenaPessoa("Abel", 22, 1.78);
    A.armazenaPessoa("Tiago", 20, 1.80);
    A.imprimePovo();
    cout << linha;

    int posicao = A.buscaPessoa("Tiago");
    if (posicao > 0)
        A.imprimePessoa(posicao);
    cout << linha;

    A.removePessoa("Tiago");
    A.imprimePovo();
    cout << linha;
   
 
    return 0;
}
