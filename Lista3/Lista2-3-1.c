#include <stdio.h>
#include <string.h>

typedef struct employee 
{
	long id;
	char name[50];
	double salary;
}employee;

int add(char fname[], long empID, char stringName[], double salary)					//Funcao para adicionar funcionarios para o quadro da empresa
{
	FILE *arq;																		//Ponteiro de arquivo
	employee aux;																	//auxiliar do struct employee
	arq=fopen(fname, "r+b");														//Abre arquivo binario (.bin) para leitura e escrita
	if(arq==NULL)
		printf("Erro. Arquivo nao existe\n");
	while(fread(&aux, sizeof(employee), 1, arq)!=0)									//Verifica todo o arquivo em busca da posição final
	{
		if(aux.id==empID)															//Se houver id repetido, o programa fecha
		{
			printf("Funcionario ja se encontra cadastrado");
			return 0;
		}
	}
	strcpy(aux.name, stringName);													//Substitui o nome da string do struct auxiliar pelo nome do funcionario
	aux.id=empID;																	//Analogo para o id
	aux.salary=salary;																//Analogo para o salario
	fwrite(&aux, sizeof(employee), 1, arq);											//Escreve as informacoes do funcionario no arquivo
	fclose(arq);																	//Fecha o arquivo, boas praticas de programacao minaaaaahhh
	return 0;
}

void moreVapiroes(char fname[], long empID, double incr)							//Funcao para adicionar aumento salarial
{
	FILE *arq;
	employee aux;
	int cachacinha=0;																//Flag que vai apontar se o funcionario existe
	arq=fopen(fname, "r+b");
	if(arq==NULL)
		printf("\nErro, documento nao criado\n");
	while(fread(&aux, sizeof(employee), 1, arq)!=0)									//Loop para ler o arquivo ate o fim
	{
		if(aux.id==empID)															//Se o funcionario existir, a flag e setada para 1
		{
			cachacinha=1;
			break;
		}
	}
	if(cachacinha)																	//Em C, 1 e V, qualquer outro numero e F, logo, como a flag subiu e setou 1, o if e V
	{
		aux.salary=aux.salary+incr;													//Incrementa o salario
		fseek(arq, -1*sizeof(employee), SEEK_CUR);									//Retorna uma posicao do arquivo, para que ele sobrescreva o funcionario existente e nao adicione mais um
		fwrite(&aux, sizeof(employee), 1, arq);										//Sobrescreve o funcionario
		printf("\nAumento efetuado com sucesso.\nO novo salario e: %.2lf\n", aux.salary);
	}
	else
		printf("\nFuncionario nao encontrado\n");
	fclose(arq);
}

void show(char fname[])
{
	FILE *arq;
	employee aux;
	arq=fopen(fname, "rb");
	if(arq==NULL)
		printf("Erro, documento nao criado\n");
	while(fread(&aux, sizeof(employee), 1, arq)!=0)
		printf("Nome do funcionario: %s\nId do funcionario: %ld\nSalario do funcionario: %.2lf\n", aux.name, aux.id, aux.salary);
}

int main()
{
	int menu;
	char nomeArq[100];																//Nome do arquivo.bin
	printf("Digite o nome do arquivo do quadro de funcionarios da empresa\n\n");
	scanf("%s", nomeArq);
	getchar();
	printf("Digite o que deseja\n1 - Adicionar funcionario\n2 - Executar aumento de funcionario\n3 - Ver o quadro de escravos da empresa\n");
	scanf("%d", &menu);
	getchar();
	switch(menu)
	{
		case 1:
		{
			employee temporario;
			printf("\nDigite o nome do funcionario:\n");
			scanf("%s", temporario.name);
			printf("\nDigite a id do funcionario:\n");
			scanf("%ld", &temporario.id);
			printf("\nDigite a merreca do escravo:\n");
			scanf("%lf", &temporario.salary);
			add(nomeArq, temporario.id, temporario.name, temporario.salary);
			break;
		}
		case 2:
		{
			employee temporario;
			printf("\nDigite a id do escravo detentor da merreca\n");
			scanf("%ld", &temporario.id);
			printf("\nDigite o troco do pao que o funcionario vai receber como aumento\n");
			scanf("%lf", &temporario.salary);
			moreVapiroes(nomeArq, temporario.id, temporario.salary);
			break;
		}
		case 3:
			show(nomeArq);
		break;
	}
	return 0;
}