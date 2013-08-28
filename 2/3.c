#include<stdio.h>

int main(void)
{
	int num[5][5] = {{2,3,4,5,6}, {1,2,3,4,5}, {3,4,5,6,7}, {4,5,6,7,8}, {5,6,7,8,9}};
	int i, j;
	int n;
	int m[5][5];

	for(i = 0; i <5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			m[j][i] = num[i][j];
		}
	}

	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
			printf("%d", m[i][j]);
		printf("\n");
	}
	
	

	return 0;
} 
