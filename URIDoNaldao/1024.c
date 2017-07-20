#include <stdio.h>
#include <stdlib.h>



int main()
{
	int MATRIZONA[12][12];
	int n, i, j;

	scanf("%d", &n);

	while(n--)
	{  
		for (i = 0; i < 9; i += 2)
			for (j = 0; j <= (i + 1); j += 2)
				scanf("%d", &MATRIZONA[i][j]);

		for (i = 0; i < 8; i += 2)
		{
			for (j = 0; j <= (i + 1); j += 2)
			{
				MATRIZONA[i + 2][j + 1] = (MATRIZONA[i][j] - MATRIZONA[i + 2][j] - MATRIZONA[i + 2][j + 2]) / 2;
				MATRIZONA[i + 1][j] = MATRIZONA[i + 2][j] + MATRIZONA[i + 2][j + 1];
				MATRIZONA[i + 1][j + 1] = MATRIZONA[i + 2][j + 1] + MATRIZONA[i + 2][j + 2];
			}
		}

		for (i = 0; i < 9; ++i)
		{
			for (j = 0; j < (i + 1); ++j)
			{
				printf("%d", MATRIZONA[i][j]);
				if(j != i) 
					printf(" ");
			}
			printf("\n");
		}
	}

	return 0;
}