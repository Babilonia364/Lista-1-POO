#include <stdio.h>														//Questao 1

int buscaBinaria(struct Pessoa cadastro[], int tamanho, int buscado);

struct Pessoa
{
	int rg;																//Deveria usar double aou inves de int nao?
	int cpf;
	char nome[80];
};
struct Pessoa cadastro[100];

int buscaBinaria(struct Pessoa cadastro[], int tamanho, int buscado)	//Para entender sobre busca binaria, ver: https://www.ime.usp.br/~pf/algoritmos/aulas/bubi2.html
{
	int esquerda, direita, meio;
	esquerda=0;															//MAS O QUE E ISSO?
	direita=tamanho;
	while(esquerda<=direita)
	{
		meio=(esquerda+direita)/2;
		if(cadastro[meio].rg==buscado)
			return meio;
		if(cadastro[meio].rg<buscado)
			esquerda=meio+1;
		else
			direita=meio-1;
	}
	return -1;
	
}

int main()
{
	/*					//Bem, o algoritmo funciona, boa sorte tentando ordenar 100 rgs diferentes para testar
	int buscado, j;
	for(j=0; j<100; j++)
		scanf("%d", &cadastro[j].rg);
	printf("Digite o rg que deseja encontrar\n");
	scanf("%d", &buscado);
	j=buscaBinaria(cadastro, 100, buscado);
	if(j!=-1)
		printf("O indice do rg %d nos arquivos eh %d\n", buscado, j);
	else
		printf("rg invalido\n");
	*/
}
