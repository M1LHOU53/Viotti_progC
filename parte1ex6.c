#include <stdio.h>
#include <math.h>

float lado, perm, area, diag;

int main(){

printf("Digite o lado do quadrado \n");
scanf("%f", &lado);


area= (lado * lado);
perm= (lado * 4);
diag= sqrt(2 * pow(lado,2));


printf("O perimetro do quadrado e: %f \n", perm );
printf("A area do quadrado e: %f  \n", area );
printf("A diagonal do quadrado e: %f \n", diag );


}
