#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int n;
	scanf("%d",&n);
	int i=0;
	int j=0;
	char tipo[3];
	char numero[50];
	char palavra[50];
	for(i=0;i<n;i++)
	{
		int dec = 0;
		j=0;
		scanf("%s",palavra);
		while(	(palavra[j]>=(int)'0') && (palavra[j]<=(int)'9') )
		{
			numero[j]=palavra[j];
			j++;
		}
		printf("%s",numero);
		if(!strcmp(tipo,"bin"))
		{
			int x=0;
			while (numero[x] != '\n') 
			{ 
				if (numero[x] == '1')
				{
					dec = dec * 2 + 1; 
				}
				else if(numero[x] == '0') 
				{
					dec *= 2;
				} 
				x++;
			} 
			printf("%d",dec);
		}
		if(!strcmp(tipo,"hex"))
		{
			
		}
		if(!strcmp(tipo,"dec"))
		{
			
		}
		printf("\n");
	}
}