#include<stdio.h>

void main()
{
	int v[3][3] = {1,2,3};
	for(int i =0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("v[%d][%d]=%d - ",i,j,v[i][j]);
		}
		printf("\n");
	}
}
