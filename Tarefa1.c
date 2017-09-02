#include <stdio.h>
#include <string.h>

void Soma();									//Calcular a media de 5 valores usando apenas 2 variaveis
void Ordena();									//Ordenar quatro palavras de 3 letras
void Palindromo();								//Verifica se um string de 50 caracteres e palindromo

void Soma()										//Funcao de media da questão 1
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

void Ordena()									//Funcao para ordenar storingues
{
	char pala1[4]="bcd", pala2[4]="abc", pala3[4]="cde", pala4[4]="efg";
	int val1=0, val2=0,val3=0;
	//fgets(pala1, 3, stdin);											//To tendo problema com fgets, alguem se habilita a resolver?
	//fgets(pala2, 3, stdin);
	//fgets(pala3, 3, stdin);
	//fgets(pala4, 3, stdin);
	val1=strcmp(pala1, pala2);
	val2=strcmp(pala2, pala3);
	val3=strcmp(pala3, pala4);
	if(val1<0 && val2<0 && val3<0)										//Gambiarra logica
	{
		printf("Ordem: %s\n%s\n%s\n%s\n", pala1, pala2, pala3, pala4);
	}else if(val1>0 && val2<0 && val3<0)
	{
		val1=strcmp(pala1, pala4);
		if(val1>0)
		{
			printf("Ordem: %s\n%s\n%s\n%s\n", pala2, pala3, pala4, pala1);
		} else
		{
			val1=strcmp(pala1,pala3);
			if(val1>0)
			{
				printf("Ordem: %s\n%s\n%s\n%s\n", pala2, pala3, pala1, pala4);
			} else
			{
				printf("Ordem: %s\n%s\n%s\n%s\n", pala2, pala1, pala3, pala4);
			}
		}
	}else if(val1<0 && val2>0 && val3<0)
	{
		val1=strcmp(pala1, pala4);
		if(val1>0)
		{
			printf("Ordem: %s\n%s\n%s\n%s\n", pala3, pala4, pala1, pala2);
		} else
		{
			val1=strcmp(pala2, pala4);
			if(val1>0)
			{
				printf("Ordem: %s\n%s\n%s\n%s\n", pala3, pala1, pala4, pala2);
			} else {printf("Ordem: %s\n%s\n%s\n%s\n", pala3, pala1, pala2, pala4);}
		}
	}else if(val1<0 && val2<0 && val3>0)
	{
		val1=strcmp(pala2, pala4);
		if(val1<0)
		{
			printf("Ordem: %s\n%s\n%s\n%s\n", pala1, pala2, pala4, pala3);
		} else
		{
			val1=strcmp(pala1, pala4);
			if(val1>0)
			{
				printf("Ordem: %s\n%s\n%s\n%s\n", pala4, pala1, pala2, pala3);
			} else{printf("Ordem: %s\n%s\n%s\n%s\n", pala1, pala4, pala2, pala3);}
		}
	}else if(val1>0 && val2>0 && val3<0)
	{
		val1=strcmp(pala2, pala4);
		if(val1>0)
		{
			printf("Ordem: %s\n%s\n%s\n%s\n", pala3, pala4, pala2, pala1);
		}else
		{
			val1=strcmp(pala1, pala4);
			if(val1<0)
			{
				printf("Ordem: %s\n%s\n%s\n%s\n", pala3, pala2, pala1, pala4);
			} else{printf("Ordem: %s\n%s\n%s\n%s\n", pala3, pala2, pala4, pala1);}
		}
	}else if(val1>0 && val2<0 && val3>0)
	{
		val1=strcmp(pala1, pala3);
		val2=strcmp(pala2, pala4);
		if(val1>0 && val2>0)
		{
			printf("Ordem: %s\n%s\n%s\n%s\n", pala4, pala2, pala3, pala1);
		}else if(val1>0 && val2<0)
		{
			printf("Ordem: %s\n%s\n%s\n%s\n", pala2, pala4, pala3, pala1);
		}else if(val1<0 && val2>0)
		{
			printf("Ordem: %s\n%s\n%s\n%s\n", pala4, pala2, pala1, pala3);
		}else{printf("Ordem: %s\n%s\n%s\n%s\n", pala2, pala4, pala1, pala3);}
	}else if(val1<0 && val2>0 && val3>0)
	{
		val1=strcmp(pala1, pala3);
		if(val1>0)
		{
			printf("Ordem: %s\n%s\n%s\n%s\n", pala4, pala3, pala1, pala2);
		}else
		{
			val1=strcmp(pala1,pala4);
			if(val1>0)
			{
				printf("Ordem: %s\n%s\n%s\n%s\n", pala4, pala1, pala3, pala2);
			}else{printf("Ordem: %s\n%s\n%s\n%s\n", pala1, pala4, pala3, pala2);}
		}
	}else if(val1>0 && val2>0 && val3>0)
	{
		printf("Ordem: %s\n%s\n%s\n%s\n", pala4, pala3, pala2, pala1);
	}
}

void Palindromo()							//Algoritimo da desonra, 70% disso alguem me ajudou a fazer :'(
{
	char PosPali[51];
	int tamanho=0, inicio, fim, pali=-1;
	fgets(PosPali, 50, stdin);
	while(PosPali[tamanho] != '\0')															//Analisa o tamanho da palavra digitada, e nao o tamanho total da string
		tamanho++;
	for(inicio=0, fim=tamanho-1; fim>0 && PosPali[inicio] != '\0'; inicio++, fim--)			//Percorre o laco pelo inicio e pelo fim
	{
		if(PosPali[fim] != PosPali[inicio])	//Compara as letrinhas das posicoes simetricas iniciais e finais
		{
			pali=0;							//Se forem diferentes, sobe a flag e acaba o laco
			break;
		}
	}
	if(pali==-1)
	{
		printf("Palindromo Sim\n");
	}else{printf("Palindromo Nao\n");}
}

int main()
{
	/*int menu;
	printf("1 - Media\n2- Ordenacao\n")
	scanf("%d", menu);
	switch()
	{
		case 1:
			Soma();
		break;
		
		case 2:
			Ordena();
		break;
		
		case 3:
			Palindromo();
		break;
		
		default:
		return 0;
	}*/
	Palindromo();
}
