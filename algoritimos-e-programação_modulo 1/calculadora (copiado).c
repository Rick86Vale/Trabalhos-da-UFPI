#include <iostream.h>
#include <iostream.h>
#include <stdio.h>
#include <math.h> //� respons�vel pelas opera��es matematicas
main (){
     float a;
     cout << "\nEscola a opera��o a ser feita: \n";
     cout << "\nADI��O:           (1)";
     cout << "\nSUBTRA��O:        (2)";
     cout << "\nMULTIPLICA��O     (3)";
     cout << "\nDIVIS�O           (4)";
     cout << "\nRAIZ QUADRADA     (5)";
     CIN >> a;
     
     if (a==1) // condi��o se em portugues
     {float a, b, c, r;
     cout << "\n digite 2 numeros para a adicao: ";
     cin >> a;
     cin >> b;
     c = a+b;
     cout << "\nO resultado de " << a<< "+" :<<b<< "e" << c;
     cout << "\ngostaria de usar novamente o programa?\n";
     cout << "sim (1)\nn�o (2) \n\n";
     if (r==1)
     {
              return (main ());
              }
              if (r==2)
              {
                       cout << "\nVolte sempre!";
                       }
                       
     
     
