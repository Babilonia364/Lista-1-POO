#include <stdio.h>
#include <string.h>

void Soma();									//Calcular a media de 5 valores usando apenas 2 variaveis
void Ordena();									//Ordenar quatro palavras de 3 letras

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
	char pala1[4]="abc", pala2[4]="bcd", pala3[4]="cde", pala4[4]="efg";
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
		
		default:
		return 0;
	}*/
	Ordena();
}
