#include <stdio.h>									//To viciado 'Heidis Küken - Das kleine Küken piept', ouçam, e mto bom!!!
#include <string.h>
#include <stdlib.h>

int ler (int V[], int n, int A);					//Funcao recursiva que identifica o elemento maximo do vetor
void replace();										//Recebe duas strings e substitui todas as ocorrencias da segunda string na primeira
int bubble_sort_mod(int vetor[], int len);				//Ordenar as pares na esquerda e impares na direita

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

void replace()										//Essa deu trabalho, nossa sem hora
{
	char str1[]="abcdabcdbbacdbba", str2[]="cd", *pont;				//Caso teste
	char temp[strlen(str1)];
	
	while((pont=strstr(str1, str2))!=NULL)							//Funcao da biblioteca padrao string, olhar documentacao
	{
		strncat(temp, str1, (strlen(str1)-strlen(pont)));			//Funcao de adicao de string da biblioteca padrao
		strcat(temp, "*");											//Funcao de adicao de "apendice" da biblio padrao string.h
		strcpy(str1, (pont+(strlen(str2)*sizeof(char))));			//Funcao de copia de string da biblio string.h
	}																//A funcao acima copia apagando o que a string anterior continha
	strncat(temp, str1, (strlen(str1)));							//Se ainda houver pedaço faltando da string 1, sera adicionado aqui
	printf("temp e:%s\n", temp);
}

int bubble_sort_mod(int vetor[], int len)							//Modificação do algoritmo de ordenacao bubble sort
{
	int k, j;
	for(j=0; j<len; j++)								//Preenchendo o vetor com numeros aleatorios de 0 a 20
	{
		vetor[j]=rand()%20;
	}
	printf("Vetor nao organizado: (");					//Mostra o estado inicial do vetor
	for(j=0; j<len; j++)
	{
		printf("%d ", vetor[j]);
	}
	printf(")\n");
	for(k=len-1; k>0; k--)								//Algoritmo bubble sorte modificado rodando
	{
		for(j=0; j<k; j++)
		{
			if((vetor[j+1]%2)==0)
			{
				vetor[j]=vetor[j]+vetor[j+1];
				vetor[j+1]=vetor[j]-vetor[j+1];
				vetor[j]=vetor[j]-vetor[j+1];
			}
		}
	}
	printf("Vetor organizado: (");						//Mostra o estado final do vetor depois de passar pelo bubble sort
	for(j=0; j<len; j++)
	{
		printf("%d ", vetor[j]);
	}
	printf(")\n");
}

int main()
{
/*	int menu=0;
	scanf("%d", &menu);
	switch(menu)
	{
		case 1:
		{
			break;
		}
	}
	*/
	int V[20], len=20;
	bubble_sort_mod(V, len);
}
