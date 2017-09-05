#include <stdio.h>									//To viciado 'Heidis Küken - Das kleine Küken piept', ouçam, e mto bom!!!
#include <string.h>

int ler (int V[], int n, int A);					//Funcao recursiva que identifica o elemento maximo do vetor
void replace();										//Recebe duas strings e substitui todas as ocorrencias da segunda string na primeira


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
}
