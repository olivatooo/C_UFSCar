#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int size(char *p)
{
	int x=0;
	while(p[x]!='\0')
	{
		x++;
	}
	return x;
}
char *reverse(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + size(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
int isAlfabeto(char p)
{
	if((int)p>=65 && (int)p<=90)
	{
		return 1;
	}
	if((int)p>=97 && (int)p<=122)
	{
		return 1;
	}
	return 0;
}
void shiftRight(char *p)
{
	int i;
	for(i=0;i<size(p);i++)
	{
		if(isAlfabeto(p[i]))
		{
			p[i]=(int)p[i]+3;
		}
	}
}
void shiftHalf(char *p)
{
	int half = size(p)/2;
	int i;
	for(i = half;i<size(p);i++)
	{
		p[i]=(int)p[i]-1;
	}
}
void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}
int main()
{
	
	int n;
	scanf("%d",&n);
	char palavra[55];
	int i;
	clean_stdin();
	for(i =0;i<(n);i++)
	{
		char palavra[55];
		gets(palavra);
		palavra[strcspn(palavra, "\n")] = 0;
		//scanf("%55[^\n]",a[i]);
		shiftRight(palavra);
		reverse(palavra);
		shiftHalf(palavra);
		printf("%s",palavra);
		printf("\n");
	}
	return 1;
}
