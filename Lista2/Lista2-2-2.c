#include<stdio.h>
#include<stdlib.h>

struct Data
{
	int dia;
	int mes;
	int ano;
};
struct Data data[5];

void ordena(struct Data vet[], int tam);	//Coloca os prototipos sempre depois do struct

void ordena(struct Data vet[], int tam)
{
	int i, j, chave, chave2, chave3;
	for(i=1; i<tam; i++)					//Inicio do insection sort, para saber mais: http://slideplayer.com.br/slide/10908957/
	{
		chave=vet[i].ano;
		chave2=vet[i].mes;
		chave3=vet[i].dia;
		j=i-1;
		
		while(j>=0 && vet[j].ano>chave)
		{
			vet[j+1].ano=vet[j].ano;
			vet[j+1].mes=vet[j].mes;
			vet[j+1].dia=vet[j].dia;
			j=j-1;
		}
		vet[j+1].ano=chave;
		vet[j+1].mes=chave2;
		vet[j+1].dia=chave3;
	}
	
	for(i=1; i<tam; i++)					//Insection sort para organizar as datas pelo mes
	{
		chave=vet[i].mes;
		chave2=vet[i].dia;
		j=i-1;
		
		while(j>=0 && vet[j].mes>chave && vet[j].ano==vet[j+1].ano)
		{
			vet[j+1].mes==vet[j].mes;
			vet[j+1].dia==vet[j].dia;
			j=j-1;
		}
		vet[j+1].mes=chave;
		vet[j+1].dia=chave2;
	}
	
	for(i=1; i<tam; i++)					//Organizando as datas por dia
	{
		chave=vet[i].dia;
		j=i-1;
		
		while(j>=0 && vet[j].dia>chave && vet[j].mes==vet[j+1].mes && vet[j].ano==vet[j+1].ano)
		{
			vet[j+1].dia==vet[j].dia;
			j--;
		}
		vet[j+1].dia=chave;
	}
	printf("Ordem Cronologia:\n\n");
	for(i=0; i<tam; i++)
	{
		printf("Ano: %d | Mes: %d | Dia: %d\n", vet[i].ano, vet[i].mes, vet[i].dia);
	}
}

int main()
{
	int i;
	for (i=0; i<5; i++)
	{
		data[i].ano=rand()%10000;
		data[i].mes=rand()%12;
		data[i].dia=rand()%30;
	}
	ordena(data, 5);
}
