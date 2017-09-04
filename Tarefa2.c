#include <stdio.h>									//To viciado 'Heidis Küken - Das kleine Küken piept', ouçam, e mto bom!!!

int ler (int V[], int n, int A);					//Funcao recursiva que identifica o elemento maximo do vetor

int ler (int V[], int n, int A)
{
	if(V[n]<A)										//Se A nunca for maior que V[n] significa que o valor de A ja e o menor do vetor
	{
		V[n]=A;
		if(n==0)									//Se o tamanho do vetor chegou ao fim, retornar A
		{
			return A;
		}else										//Se nao continua no laço
		{
			return ler(V, n-1, A);
		}
	}else if(n!=0)									//Se o vetor nao chegou ao seu fim, continue o laco
	{
		return ler(V, n-1, A);
	}else{return A;}								//Se chegou, abortar missao
}

int main()
{
	int V[3], A=10, n=3;
	ler(V, n, A);
}