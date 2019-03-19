#include <stdio.h>
#include <stdlib.h>

void main()
{
	int Buff[5] = {5,15,30,10,35};
	int *p;
	
	int i;
	p = Buff;

	for (i = 0; i < 5; i++)
		{
		printf("%d\n",Buff[i]);
		}
	printf("\n");

	for (i = 0; i < 5; i++)
		{
		printf("%d\n",Buff + i);	
		}	

	printf("\n");
		
	for (i = 0; i < 5; i++)
		{
			printf("%p\n", *p);
			p++;
		}	

}