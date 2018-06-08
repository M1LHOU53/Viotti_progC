//lista1ex5

#include <stdio.h>
#include <math.h>


float altura, base, perm, diag, area;

int main()
{
	printf("Digite a base do retangulo: \n");
	scanf("%f", &base);
	printf("Digite a altura do retangulo: \n");
	scanf("%f", &altura);

    perm = 2*(base + altura); 
    area = base * altura;
	diag = sqrt(pow(base,2) + pow(altura,2)) ;

	printf("O perimetro do retangulo e: %f \n", perm );
	printf("A area do retangulo e: %f M² \n" ,area );
	printf("A diagonal do retangulo e: %f \n", diag );


}
