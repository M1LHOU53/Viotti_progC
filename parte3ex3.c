#include <stdio.h>
#include <stdlib.h>


float nota[50], maior =0;
int T , contT=0 ;
int main(){

for ( T = 0; T < 50; T++)
{
	do
	{
		printf("Digite a nota %d \n", T+1);
		scanf("%f", &nota[T]);
		
	}while(nota[T] < 0 || nota[T] > 100);
}
for(T = 0;T < 50; T++)
{
	if(nota[T] > maior)
		maior = nota[T];

printf("A nota %d do vetor vale %.2f\n",T+1 , nota[T]);


}

printf("\n\n\nA maior nota do vetor e: %.2f\n", maior );

}
