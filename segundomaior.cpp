#include<stdio.h>
#include<stdlib.h>
main()
{
	int vetor[] = {1,2,3,4,5,6,6};
	int i, maior=vetor[0],smaior=vetor[0];
	for(i=0;i<7;i++)
	{
		if(maior<vetor[i])
		{
			maior=vetor[i];
		}
	}
	for(i=0;i<7;i++)
	{
		if(vetor[i]<maior && vetor[i]>smaior)
		{
			smaior=vetor[i];
		}
	}
	
	printf("Segundo maior %i",smaior);
}
