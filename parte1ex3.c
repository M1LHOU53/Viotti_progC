//PARTE 1 ex 3
#include <stdio.h>
#include <string.h>
float PI, altura;

char sexo;

int main(){


	printf("Digite a sua altura: \n");
	scanf("%f", &altura);
	printf("Digite o seu sexo (M ou F)\n");
	scanf("%s", &sexo);


	if (sexo == 'M')
	{
		PI =(72.7 * altura) - 58;
		printf("voce é do sexo masculino e seu peso ideal é %f: \n", PI );
	}
	
	
	if (sexo == 'F') 
	{
		PI = (62.1 * altura) -44.7;
		printf("voce é do sexo feminino e seu peso ideal é %f: \n", PI );
	}

}
