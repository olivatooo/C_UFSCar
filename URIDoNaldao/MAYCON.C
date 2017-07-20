#include <stdio.h>
#include <palavraing.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	char a;
	gets(&a);

	for(i = 0; i< n;i++){
		char palavra[1000];
		gets(palavra);
		int len = strlen(palavra), j, k = len;

		for(j = 0; j < len; j++){
			if((palavra[j] >= 'a' && palavra[j] <= 'z' ) || (palavra[j] >= 'A' && palavra[j] <= 'Z' ))
				palavra[j] += 3;
		}

		char saida[len+1];
		saida[k] = '\0';
		k--;
		for(j = 0; j < len; j++){
			saida[k] = palavra[j];
			k--;
		}

		for(j = len/2; j < len; j++){
			saida[j] -= 1;
		}

		puts(saida);
	}
	return 0;
}