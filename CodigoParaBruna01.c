#include<stdio.h>

int size(char *p)
{
	int i =0;
	while(p[i]!='\0')
	{
		i++;
	}
	return i;
}
void main()
{
	char p1[50];
	char p2[50];
	printf("\nDigite a primeira palavra:");
	scanf("%s",p1);
	printf("\nDigite a segunda palavra:");
	scanf("%s",p2);
	int tam = size(p1)+size(p2);
	printf("\n");
	for(int i=0;i<tam;i++)
	{
			if(!(i>size(p1)))
				printf("%c",p1[i]);
			if(!(i>size(p2)))
				printf("%c",p2[i]);
	}
	printf("\n");
}
