#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
void randomThis(int v[5][5])
{
	int aux;
	int x = rand()%5;
	int y = rand()%5;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			aux = v[i][j];
			v[i][j]=v[x][y];
			v[x][y]=aux;
			x=rand()%5;
			y=rand()%5;
		}
	}
}
void printGrid(int v[5][5])
{
	for(int i =0;i<5;i++)
	{
		for(int j =0;j<5;j++)
		{
			printf("%c-",v[i][j]);
		}
		printf("\n");
	}
}
void fillGrid(int v[5][5])
{
	int x=65;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			v[i][j] = x;
			x++;
		}
	}
}
void saveGrid(int v[5][5],int path)
{
	FILE *arq;
	char str[10];
	sprintf(str,"./data/%d",path);
	arq = fopen(str,"w");
	if(!arq)
	{
		printf("\nERRO DE LEITURA\n");
		exit(EXIT_FAILURE);
	}
	for(int i =0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			fprintf(arq,"%c",v[i][j]);
		}
	}
	fclose(arq);
}
void loadGrid(int path,char *linha)
{
	FILE *arq;
	char str[10];
	sprintf(str,"./data/%d",path);
	arq = fopen(str,"r");
	if(!arq)
	{
		printf("\nERRO DE LEITURA\n");
		exit(EXIT_FAILURE);
	}
	while((fscanf(arq,"%s\n",linha))!=EOF)
    {
    	printf("\n%s",linha);
    }
    fclose(arq);
}
void main()
{
	srand(time(NULL));
	char v[25];
	int path = rand()%100000000;
	int grid[5][5];
	fillGrid(grid);
	printGrid(grid);
	randomThis(grid);
	printf("\n");
	printGrid(grid);
	saveGrid(grid,path);
	loadGrid(path,v);
}
