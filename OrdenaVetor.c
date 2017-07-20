#include<stdio.h>

void main()
{
	int tam = 10;
	int v[tam];
	int aux;
	for(int i =0;i<tam;i++)
	{
		printf("\nDigite o valor(%d):",i);
		scanf("%d",&v[i]);
	}
	for(int i =0;i<tam;i++)
	{
		for(int j=0;j<tam;j++)
		{
			if(v[i]>v[j])
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	for(int i=0;i<tam;i++)
	{
		printf("\nVetor(%d):%d",i,v[i]);
	}
	printf("\n");
}
