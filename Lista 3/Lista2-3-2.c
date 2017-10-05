#include <stdio.h>
#include <stdlib.h>

int main()																	//Nessa questao, aparentemente, precisamos conver char em int
{																			//Pois retiramos os numeros de um txt e eles vem em int
	FILE *arqEntra, *arqSai;
	char auxChar;
	int aux, vet[6], i=0, j;
	arqEntra=fopen("teste.txt", "r");										//Assume que voce tem os arquivos com numeros desordenados e separados por quebra de linha, sobre o nome de teste.txt no pc
	if(arqEntra==NULL)														//Com apenas 6 numeros distintos
		printf("Deu ruim versao 1 negada\n");
	arqSai=fopen("ordenado.txt", "w");										//Cria um arquivo com numeros ordenados
	if(arqEntra==NULL)
		printf("Erro no arquivo de saida gentil cavalheiro\n");
	while(fscanf(arqEntra, "%c", &auxChar)!= EOF)							//To com preguiça de pensar
	{
		if(auxChar!='\n')													//Como os char devem estar espaçados por quebras de linha, precisamos desse if
		{
			vet[i]=auxChar-48;												//Gambiarra para transformar char em int
			i++;
		}
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
	for(i=0; i<6; i++)														//Aqui tá rolando algum bug, na hora de preencher, que tá fugindo ao meu controle
	{
		fprintf(arqSai, "%c", vet[i]+48);									//Gambiarra para transformar int em char
		fprintf(arqSai, "%c", '\n');
	}
}
