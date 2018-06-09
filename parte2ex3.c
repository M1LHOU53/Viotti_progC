#include <stdio.h>

float n1, n2, result;

int main(){

printf("Digite o primeiro numero\n");
scanf("%f", &n1);
do{

printf("Digite o segundo numero\n");
scanf("%f", &n2);
if (n2 == 0)
{
	printf("Valor Invalido\n");
}
}while ( n2 == 0);

result = n1 /n2;



printf("O resultado da divisão entre %.2f e %.2f e igual a %.3f: \n",n1, n2, result );

}
