#include<stdio.h>

int main()					//Sambare saaaaave meeeeee
{
	int quantidade, i, soma=0, *v;
	printf("Digite a quantidade de alunos da turma\n");
	scanf("%d", &quantidade);
	v=malloc(quantidade*sizeof(int));
	for(i=0; i<quantidade; i++)
	{
		printf("Digite a nota do aluno: %d\n", i+1);
		scanf("%d", &v[i]);
		soma=soma+v[i];
	}
	printf("A media da turma e: %d", soma/quantidade);
}