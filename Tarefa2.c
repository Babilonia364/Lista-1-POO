#include <stdio.h>									//To viciado 'Heidis Küken - Das kleine Küken piept', ouçam, e mto bom!!!
#include <string.h>
#include <stdlib.h>

int ler (int V[], int n, int A);						//Funcao recursiva que identifica o elemento maximo do vetor
void replace();									//Recebe duas strings e substitui todas as ocorrencias da segunda string na primeira
int bubble_sort_mod(int vetor[], int len);		//Ordenar as pares na esquerda e impares na direita
int VerOrdem(int vetor[], int len);
int* FillVet(int vetor[], int len);

int ler (int V[], int n, int A)
{
	if(V[n]>A)										//Se A nunca for maior que V[n] significa que o valor de A ja e o menor do vetor
	{
		A=V[n];
		printf("%d\n", A);
		if((n)==0)									//Se o tamanho do vetor chegou ao fim, retornar A
		{
			return A;
		}else										//Se nao continua no laço
		{
			return ler(V, n-1, A);
		}
	}else if((n)!=0)									//Se o vetor nao chegou ao seu fim, continue o laco
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

int bubble_sort_mod(int vetor[], int len)			//Modificação do algoritmo de ordenacao bubble sort
{
	int k, j;
	for(k=len-1; k>0; k--)							//Algoritmo bubble sorte modificado rodando
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

int VerOrdem(int vetor[], int len)					//Falta fazer sem ter o tamanho do vetor
{
	int i, flag;
	for(i=0, flag=0; i<len-1; i++)
	{
		if(vetor[i]<vetor[i+1] && flag>=0)
			flag++;
	else if(vetor[i]>vetor[i+1] && flag<=0)
			flag--;
		else
		{
			flag=0;
			break;
		}
	}
	if(flag>0)
		return 1;
	else if(flag<0)
		return-1;
	else
		return 0;
}

int* FillVet(int vetor[], int len)
{
	int j;
	for(j=0; j<len; j++)							//Preenchendo o vetor com numeros aleatorios de 0 a 20
	{
		vetor[j]=rand()%20;
	}
	printf("Vetor gerado pseudoaleatoriamente: (");				//Mostra o estado inicial do vetor
	for(j=0; j<len; j++)
	{
		printf("%d ", vetor[j]);
	}
	printf(")\n\n");
	return vetor;
}

int main()
{
	int menu=0;
	printf("1- Elemento Maximo\n2- Substituir String\n3- Ordenar Pares e Impares\n4- Ver a ordenacao do vetor\n");
	scanf("%d", &menu);
	getchar();
	switch(menu)
	{
		case 1:
		{
			int *v, len=20, A=0;
			v=malloc(len*sizeof(int));
			v=FillVet(v, len);
			A=ler (v, len, A);
			printf("O valor maximo e: %d\n", A);
			free (v);
			break;
		}
		case 2:
			replace();
			break;
		case 3:
		{
			int *v, len=20;
			v=malloc(len*sizeof(int));
			v=FillVet(v, len);
			bubble_sort_mod(v, len);
			free (v);
			break;
		}
		case 4:
		{
			int *v, len=20, n;
			v=malloc(len*sizeof(int));
			v=FillVet(v, len);
			n=VerOrdem(v, len);
			printf("n e: %d\n", n);
			free (v);
			break;
		}
	}
}
