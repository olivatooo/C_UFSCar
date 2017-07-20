#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

typedef struct
{
	int idade;
	char nome[30];
	int v[2];
}dados;

void printDados(dados *d,int tam)
{
	for(int i=0;i<tam;i++)
	{
		printf("Idade:%d\tNome:%s\t",d[i].idade,d[i].nome);
		for(int j=0;j<2;j++)
		{
			printf("V:%d\t",d[i].v[j]);
		}
		printf("\n");
	}
}

void main()
{
	srand(time(NULL));
	FILE *arq;
	dados d[3];
	dados t[3];
	for(int i =0;i<3;i++)
	{
		d[i].idade = rand() % 10;
		strcpy(d[i].nome,"Teste");
		for(int j=0;j<2;j++)
		{
			d[i].v[j]=rand() % 20;
		}
	}
	arq=fopen("rbin","wb");
	fwrite(d,sizeof(dados),3,arq);
	fclose(arq);
	arq = fopen("rbin","rb");
	fread(t,sizeof(dados),3,arq);
	printDados(t,3);
}
