#include <stdio.h>

int main()

{

int vet[70], cont, repete;

for(cont=0;cont < 70;cont++)
{
	do
	{

		printf("Digite o valor da %d amostra: ", cont+1);
		scanf("%d", &vet[cont]);
		if(vet[cont] < 0)
		{
			vet[cont] = 999;
			repete++;
			break;
		}
	}while(vet[cont] < -250 || vet[cont] > 350);
}

for(cont=0; cont < 70; cont++)
{
	printf("O valor da amostra %d é igual a : %d\n\n", cont+1, vet[cont]);
	

}
printf("O numero em que o 999 apareceu foi de : %d ",repete );

}
