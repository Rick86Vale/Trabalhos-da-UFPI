#include <iostream.h>
#include <iostream.h>
#include <stdio.h>
#include <math.h> //é responsável pelas operações matematicas
main (){
     float a;
     cout << "\nEscola a operação a ser feita: \n";
     cout << "\nADIÇÃO:           (1)";
     cout << "\nSUBTRAÇÃO:        (2)";
     cout << "\nMULTIPLICAÇÃO     (3)";
     cout << "\nDIVISÃO           (4)";
     cout << "\nRAIZ QUADRADA     (5)";
     CIN >> a;
     
     if (a==1) // condição se em portugues
     {float a, b, c, r;
     cout << "\n digite 2 numeros para a adicao: ";
     cin >> a;
     cin >> b;
     c = a+b;
     cout << "\nO resultado de " << a<< "+" :<<b<< "e" << c;
     cout << "\ngostaria de usar novamente o programa?\n";
     cout << "sim (1)\nnão (2) \n\n";
     if (r==1)
     {
              return (main ());
              }
              if (r==2)
              {
                       cout << "\nVolte sempre!";
                       }
                       
     
     
