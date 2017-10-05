#include <stdio.h>
#include <stdlib.h>

int main()																	//Nessa questao, aparentemente, precisamos conver char em int
{																			//Pois retiramos os numeros de um txt e eles vem em char
	FILE *arqEntra, *arqSai;
	char auxChar[100];
	int aux, vet[6], i=0, j;
	arqEntra=fopen("teste.txt", "r");										//Assume que voce tem os arquivos com numeros desordenados e separados por quebra de linha, sobre o nome de teste.txt no pc
	if(arqEntra==NULL)														//Com apenas 6 numeros distintos
		printf("Deu ruim versao 1 negada\n");
	arqSai=fopen("ordenado.txt", "w");										//Cria um arquivo com numeros ordenados
	if(arqEntra==NULL)
		printf("Erro no arquivo de saida gentil cavalheiro\n");
	while(fscanf(arqEntra, "%s", auxChar)!= EOF)							//To com preguiça de pensar
	{
		vet[i]=atoi(auxChar);												//Funcao para transformar string em int
		i++;
	}
	for(i=1; i<6; i++)														//Insection sort da massa
	{
		aux=vet[i];
		j=i-1;
		while(j>=0 && vet[j]>aux)
		{
			vet[j+1]=vet[j];
			j=j-1;
		}
		vet[j+1]=aux;
	}
	for(i=0; i<6; i++)
	{
		sprintf(auxChar, "%d", vet[i]);										//Funcao para converter string em int
		fprintf(arqSai, "%s", auxChar);
		fprintf(arqSai, "%c", '\n');
	}
	fclose(arqEntra);
	fclose(arqSai);
}
