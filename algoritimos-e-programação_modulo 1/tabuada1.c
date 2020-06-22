#include <stdio.h>

void tabuada(int n){
printf("\n\n");
printf("TABUADA DO NUMERO %d: \n\n",n);
int i = 1;
for(i = 1; i <= 10; ++i){//* o i eh a quantidade de vezes que o numero sera multiplicado
printf("%d X %d = %d\n",n,i,n*i);// o n eh o numero digitado pelo usuario
}
printf("\n\n");
}

int main(){
int n = 0;

printf("ENTRE COM UM NUMERO: ");
scanf("%d",&n);
tabuada(n);

system("PAUSE");
}
