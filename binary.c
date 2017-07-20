#include<stdio.h>

typedef struct{
	int idade;
	char nome[50];
	int id[3];
}dados;

typedef struct{
	int idade;
	char nome[50];
	int id[3];
}teste;

void main()
{
	dados d[5];
	dados t[5];
	FILE *arq;
	char buffer[100];
	arq = fopen("reg.bin","wb");
	for(int i =0;i<5;i++)
	{
		printf("\nDigite o nome:");
		scanf("%s",d[i].nome);
		printf("\nDigite a idade:");
		scanf("%d",&d[i].idade);
		for(int j=0;j<3;j++)
		{
			printf("\nDigite o id:");
			scanf("%d",&d[i].id[j]);
		}
	}
	fwrite(d,sizeof(dados),5,arq);
	fclose(arq);
	arq = fopen("reg.bin","rb");
	fread(t,sizeof(dados),5,arq);
	fclose(arq);
	for(int i =0;i<5;i++)
	{
		printf("\nNome[%d]:%s",i,t[i].nome);
		printf("\nIdade[%d]:%d",i,t[i].idade);
		for(int j=0;j<3;j++)
		{
			printf("\nId[%d]:%d",j,t[i].id[j]);
		}
		printf("\n");
	}
}
