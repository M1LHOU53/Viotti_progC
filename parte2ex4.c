#include <stdio.h>

float n1=-1, n2=-1, media;

int main(){



while(n1 < 0 || n1 > 10)
{
	printf("Digite a primeira nota\n");
	scanf("%f", &n1);
	if (n1 < 0 || n1 > 10)
	{
		printf("Nota Invalida\n");
	}
}

	
while(n2 < 0 || n2 > 10)
{

	printf("Digite a segunda nota\n");
	scanf("%f", &n2);
	if (n2 < 0 || n2 > 10)
	{
		printf("Nota Invalida\n");
	}

}
	


media = (n1 + n2)/2;



printf(" A media final entre %.2f e %.2f e igual a %.3f: \n",n1, n2, media );

}
