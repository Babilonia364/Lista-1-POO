#include <stdio.h>

double Soma();

double Soma()									//Funcao de media da questão 1
{
	double valor;
	double quantidade=0;
	scanf("%lf", &valor);
	quantidade=quantidade+(valor/1000);			//Jogando os valores para a terceira casa decimal da variavel de contagem
	while (quantidade<4)
	{
		printf("%f\n", valor);					//Vai imprimir a nota
		printf("%f\n", quantidade);				//Vai imprimir 0.005 e a soma ocorrera na terceira casa decimal
		scanf("%lf", &valor);
		quantidade=quantidade+(valor/1000);
		quantidade++;
	}
	valor=(quantidade-4)*1000;					//Voltando a soma ao normal
	quantidade=5;
	valor=valor/quantidade;
	printf("%f\n", valor);
}

int main()
{
	Soma();
}