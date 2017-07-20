#include<stdio.h>
#include<string.h>

int getPseudoRandomWord(char *p)
{
	FILE *arq;
	int c;
	FILE *file;
	file = fopen("words.png", "r");
	int x=0;
	if (file)
	{
	    /*while ((fscanf(file,"%s\n",p)) !=EOF)
		{
			//printf("%s",p);
		}*/
		fscanf(file,"%s\n",p);
	    fclose(file);
	}
	return x;
}
int win(char *v,char *p)
{
	return strcmp(v,p);
}
void main()
{
	char palavra[55];
	char tentativa[55];
	getPseudoRandomWord(palavra);
	printf("\n%s\n",palavra);
	while(win(palavra,tentativa))
	{
		
	}
}
