#include<stdio.h>
#include<math.h>
void toBin(int val,int *p)
{
	int i =0;
	while(val>0)
	{
		p[i]=val%2;
		val = val/2;
		i++;
	}
	i--;
	printf("\n");
	while(i!=-1)
	{
		printf("%d",p[i]);
		i--;
	}
	printf("\n");
}
int size(char *p)
{
	int i =0;
	while(p[i]!='\0')
	{
		i++;
	}
	return i;
}
int charToInt(char c)
{
	return ((int)c)-48;
}
int toDecimal(char *p)
{
	int dec=0;
	for(int i =0;i<size(p);i++)
	{
			dec += pow(2,i)*charToInt(p[i]);
	}
	return dec;
}
void main()
{
	int val=0;
	int v[255];
	printf("\nDigite o valor que você deseja converter:");
	scanf("%d",&val);
	toBin(val,v);
	printf("\n");
	printf("\nDigite o valor em binário:");
	char bin[255];
	fflush(stdin);
	scanf("%s",bin);
	printf("%d",toDecimal(bin));
}
