#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Soma();									//Calcular a media de 5 valores usando apenas 2 variaveis
void Ordena();									//Ordenar quatro palavras de 3 letras
void Palindromo();								//Verifica se um string de 50 caracteres e palindromo
void Velha();									//Ler um 'tabuleiro' de jogo da velha (tic tac toe) e dar o resultado

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
	char pala1[5]="bcd", pala2[5]="abc", pala3[5]="cde", pala4[5]="efg";
	int val1=0, val2=0,val3=0;
	//fgets(pala1, 4, stdin);											//To tendo problema com fgets, alguem se habilita a resolver?
	//fgets(pala2, 4, stdin);
	//fgets(pala3, 4, stdin);
	//fgets(pala4, 4, stdin);
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
	char PosPali[52];
	int tamanho=0, inicio, fim, pali=-1;
	fgets(PosPali, 51, stdin);
	PosPali[strlen(PosPali)-1]='\0';
	while(PosPali[tamanho] != '\0')															//Analisa o tamanho da palavra digitada, e nao o tamanho total da string
		tamanho++;
	for(inicio=0, fim=tamanho-1; fim>0 && PosPali[inicio] != '\0'; inicio++, fim--)			//Percorre o laco pelo inicio e pelo fim
	{
		while(PosPali[inicio]==' ')															//Enquanto houver espaço na string ele pula
			inicio++;
		while(PosPali[fim]==' ')															//Analogo ao comentario anterior
			fim--;
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

void Velha()									//Funcao feita com base no jogo turnos, com o programa passando a rodar a partir do quinto turno
{
	char tabul[3][3], flagX='1', flagO='1';
	int i, j;
	for(j=0; j<3; j++)							//Laco for feito apenas para teste
	{
		for(i=0; i<3; i++)
		{
			if(j==2-i)
				tabul[i][j]='2';
			else
				tabul[i][j]='1';
		}
	}
	i=1;
	for(j=0; j<3; j++)							//Testes logicos de checagem de vencedor
	{
		if((tabul[i-1][j]==tabul[i][j])&&(tabul[i][j]==tabul[i+1][j])&&(tabul[i+1][j]=='2'))
		{
			flagX='0';
			break;
		}else if((tabul[i-1][j]==tabul[i][j])&&(tabul[i][j]==tabul[i+1][j])&&(tabul[i+1][j]=='0'))
		{
			flagO='0';
			break;
		}else if((j==1) && (tabul[i-1][j-1]==tabul[i][j])&&(tabul[i][j]==tabul[i+1][j+1])&&(tabul[i+1][j+1]=='2'))
		{
			flagX='0';
			break;
		}else if((j==1) && (tabul[i-1][j-1]==tabul[i][j])&&(tabul[i][j]==tabul[i+1][j+1])&&(tabul[i+1][j+1]=='0'))
		{
			flagO='0';
			break;
		}
	}
	j=1;
	for(i=0; i<3; i++)
	{
		if((tabul[i][j-1]==tabul[i][j])&&(tabul[i][j]==tabul[i][j+1])&&(tabul[i][j+1]=='2'))
		{
			flagX='0';
			break;
		}else if((tabul[i][j-1]==tabul[i][j])&&(tabul[i][j]==tabul[i][j+1])&&(tabul[i][j+1]=='0'))
		{
			flagO='0';
			break;
		}else if((i==1) && (tabul[i+1][j-1]==tabul[i][j])&&(tabul[i][j]==tabul[i-1][j+1])&&(tabul[i-1][j+1]=='2'))
		{
			flagX='0';
			break;
		}else if((i==1) && (tabul[i+1][j-1]==tabul[i][j])&&(tabul[i][j]==tabul[i-1][j+1])&&(tabul[i-1][j+1]=='0'))
		{
			flagO='0';
			break;
		}
	}
	if(flagX=='0')
	{
		printf("X venceu\n");
	}else if(flagO=='0')
	{
		printf("O venceu\n");
	}else{printf("Deu velha\n");}
}

int main()
{
	int menu;
	printf("1 - Media\n2- Ordenacao\n3- Palindromo\n4- Velha\n\n");
	scanf("%d", &menu);
	switch(menu)
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
		
		case 4:
			Velha();
		break;
		
		default:
		return 0;
	}
}
