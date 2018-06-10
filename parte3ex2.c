#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

srand(time(NULL));
int cont, vet[1000];
int um=0, dois=0, tres=0, quatro=0, cinco=0 , seis=0;

for (cont = 0; cont < 1000; cont++)
{
	vet[cont]=rand()%6+1;
	printf("elemento %d do vetor RANDOMICO é igual : %d\n",cont+1, vet[cont]);
}


for (cont=0 ; cont <1000 ; cont++)

{
	if(vet[cont] ==1)
	{		
		um++;
	}

	if(vet[cont] == 2)
	{
		dois++;
	}
	if(vet[cont] == 3)
	{
		tres++;
	}
	if(vet[cont] == 4)
	{
		quatro++;
	}
	if(vet[cont] == 5)
	{
		cinco++;
	}
	if(vet[cont] == 6)
	{
		seis++;
	}
}
printf("\n\n\n\nO numero 1 apareceu %d vezes\n\n ", um);
printf("O numero 2 apareceu %d vezes\n\n ", dois);
printf("O numero 3 apareceu %d vezes\n\n ", tres);
printf("O numero 4 apareceu %d vezes\n\n ", quatro);
printf("O numero 5 apareceu %d vezes\n\n ", cinco);
printf("O numero 6 apareceu %d vezes ", seis);


}
