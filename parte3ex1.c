#include <stdio.h>
#include <stdlib.h>


float temp[31];
int T , contT=0;
int main(){

for ( T = 0; T < 31; T++)
{
	do
	{
		printf("Digite a temperatura \n");
		scanf("%f", &temp[T]);
		if(temp[T] > 28.0 && temp[T] <= 45.0)
			contT++;
	}while(temp[T] < -15.0 || temp[T] > 45.0);
}
for(T = 0;T < 31; T++)
{
	printf("O Elemento %d do vetor vale %.2f\n",T+1 , temp[T]);
}

printf("%d ocorrencias acima de 28.0 no vetor temp\n", contT);

}
