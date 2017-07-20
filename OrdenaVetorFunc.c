#include<stdio.h>
#include<stdlib.h>
void sort(int *p, int tam)
{
	int aux=0;
	for(int i=0;i<tam;i++)
	{
		for(int j=0;j<tam;j++)
		{
			if(p[i]>p[j])
			{
				aux = p[i];
				p[i]=p[j];
				p[j]=aux;
			}
		}
	}
}
void shout(int *p,int tam)
{
	printf("\n");
	for(int i =0;i<tam;i++)
	{
		printf("%d -",p[i]);
	}
}
/*int size(int *p)
{
	printf("<-- %d -->",sizeof(p)/sizeof(p[0]));
}*/
void main()
{
	int tam = 10;
	int v[tam];
	for(int i = 0;i<tam;i++)
	{
		printf("\nDigite a posição(%d):",i);
		scanf("%d",&v[i]);
	}
	shout(v,tam);
	sort(v,tam);
	shout(v,tam);
	printf("\n");
	//size(v);
}
