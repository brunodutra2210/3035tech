#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
float a,b,resultado;

float multiplica(float a, float b)
{
	resultado=a*b;
	return resultado;
} 

float soma(float a, float b)
{
	resultado=a+b;
	return resultado;
} 

float divisao(float a, float b)
{
	resultado=a/b;
	return resultado;
} 

float subtracao(float a, float b)
{
	resultado=a-b;
	return resultado;
} 
main()
{
	int operacao;
	char flag;
	printf("Valor a: \n");
	scanf("%f",&a);
	printf("Valor b: \n");
	scanf("%f",&b);
	printf("Escolha uma operacao:\n");
	scanf("%i",&operacao);	
	switch(operacao)
	{
		case 1:
			soma(a,b);
			break;
		case 2:
			subtracao(a,b);
			break;
		case 3:
			multiplica(a,b);
			break;
		case 4:
			divisao(a,b);
			break;		
	}
	
	if(operacao!=1 && operacao!=2 && operacao!=3 && operacao!=4) 
	{
		printf("Erro!");
	}
	else
	{
		 printf("Resultado: %.2f\n\n\n",resultado);
	}
	return 0;
}
