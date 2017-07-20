#include<stdio.h>
#include<string.h>
#include<ctype.h>
int size(char *p)
{
  int i =0;
  while(p[i]!='\0')
    {
      i++;
    }
  return i;
}
void toUpperCase(char *p)
{
  for(int i=0;i<size(p);i++)
    {
      p[i]=toupper(p[i]);
    }
}
void crypt(char *p,int key)
{
  int tam = size(p);
  for(int i =0;i<size(p);i++)
    {
      if((p[i]+key)>90)
	{
	  p[i]=64+((p[i]+key)-90);
	}
      else
	{
	  p[i]+=key;
	}
    }
}
void main()
{
  char palavra[50];
  int cifra=0;
  printf("\nSay your words:");
  scanf("%s",palavra);
  toUpperCase(palavra);
  printf("\nSay your key:");
  scanf("%d",&cifra);
  printf("\n%s\n",palavra);
  for(int i=0;i<26;i++)
    {
      crypt(palavra,cifra);
      printf("\n%d - %s\n",i,palavra);
    }
  printf("\n%s\n",palavra);
  
}
