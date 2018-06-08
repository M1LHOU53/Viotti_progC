#include <stdio.h>

int main()
{
	int n, b, c, i, j;
	
	scanf ("%d", &n);
	
	for(i = 0; i < n; ++i)
	{
	scanf ("%d", &b);
		
		for(j = 0; j < b; ++j)
		{
			scanf ("%d", &c);
			
			if(c == 1){
				printf("Rolien");
			}else if(c == 2){
				printf("Naej");				
			}else if(c == 3){
				printf("Elehcim");
			}else{
				printf("Odranoel");
			}
		}
	}
			
	return 0;
}
