#include<stdio.h>

int* Union(int V1[], int V2[], int tam1, int tam2)			//To com sono, falta testar essa bagaça
{
	int i, *V3;
	V3=malloc((tam1+tam2)*sizeof(int));
	for(i=0; i<tam1; i++)
		V3[i]=V1[i];
	for(i=0; i<tam2; i++)
		V3[i]=V2[i];
	return V3;
}

int main()
{
	int tam1=10, tam2=10;
	int V1[tam1], V2[tam2], *V3;
	V3=malloc((tam1+tam2)*sizeof(int));
	V3=Union(V1, V2, tam1, tam2);
	free(V3);
}
