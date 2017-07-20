#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *senha[255];
	int c;
	while(scanf(" %[^\n]",senha))
	//while(fgets(senha,sizeof(senha),stdin))
	//while(gets(senha))
	//⁠⁠⁠while(gets(senha) != NULL)
	{
            	fflush(stdin);
		//getchar() ;
		//senha[strcspn(senha, "\n")] = 0;
		//printf("%s",senha );
		int maius=0,minus=0,num=0, zika=0,tam=0;
		while(senha[tam]!='\0')
		{
			if((int)senha[tam]>=(int)'0' && (int)senha[tam]<=(int)'9')
				num = 1;
			if((int)senha[tam]>=(int)'A' && (int)senha[tam]<=(int)'Z')
				maius = 1;
			if((int)senha[tam]>=(int)'a' && (int)senha[tam]<=(int)'z')
				minus = 1;
			if((int)senha[tam]<(int)'0')
				zika=1;
			if((int)senha[tam]>(int)'9' && (int)senha[tam]<(int)'A')
				zika=1;
			if((int)senha[tam]>(int)'Z' && (int)senha[tam]<(int)'a')
				zika=1;
			if((int)senha[tam]>(int)'z')
				zika=1;
			tam++;
		}
		if(minus && maius && num && tam>=6 && tam<=32 && !zika)
		{
			printf("Senha valida.");
		}
		else
		{
			printf("Senha invalida.");
		}
		printf("\n");
		/*memset(senha,0,strlen(senha));
		senha[0]='\0';*/
	}
	printf("\n");
	return 0;
}
