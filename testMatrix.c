#include<stdio.h>
#define tam 2
void fill(int v[tam][tam])
{
	for(int i =0;i<tam;i++)
	{
		for(int j=0;j<tam;j++)
		{
			v[i][j]=i*j;
		}
	}
}

void printM(int v[tam][tam])
{
	for(int i=0;i<tam;i++)
	{
		for(int j=0;j<tam;j++)
		{
			printf("%d ",v[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	int v[tam][tam];
	fill(v);
	printM(v);
}
