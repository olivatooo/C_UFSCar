#include<stdio.h>
#include<string.h>
void main()
{
	char w1[55];
	char w2[55];
	strcpy(w1,"testeAIUSHAUIS");
	strcpy(w2,"teste");
	int tam =0;
	while(w1[tam]==w2[tam])
	{
		tam++;
	}
	printf("\nTam:%d\n",tam);
}
