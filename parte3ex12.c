#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char frase[100];
int tamanho, espaco=0, i;

int main()

{

printf("Digite a sua frase:\n");
gets(frase);

tamanho = strlen(frase);

for (i=0 ; i < tamanho; i++ )
{
	if (frase[i] == ' ')
	{
		espaco++;
	}

}

for(i=tamanho-1; i >= 0; i--) {
		printf("%c", frase[i]);
	}



printf("\n\nA quantidade de letras na frase digitada é de: %d letras\n", tamanho - espaco );



}

