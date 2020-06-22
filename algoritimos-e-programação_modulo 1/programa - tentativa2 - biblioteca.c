#include <stdio.h>
#include <stdlib.h>
int main ()
{

    char livro [30];
    char autor [30];
    char editora [30];
    
    printf ("digite o titulo do livro:");
    gets (livro);
    
    printf ("digite o autor do livro:");
    gets (autor);
    
    printf ("digite a editora do livro:");
    gets (editora);
    
    
    printf ("o livro eh: %s \n", livro);
    printf ("o autor eh: %s \n", autor);
    printf ("editora eh: %s \n", editora);
    
    system ("pause");
    return main ();
}
