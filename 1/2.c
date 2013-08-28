#include<stdio.h>

int main(void)

{
	int a[5] = {9,8,7,6,5};
	int i , j;
	int max;

	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4-i; j++ )
		{
			if(a[j] > a[j+1])
			{
				max = a[j];
				a[j] = a[j+1];
				a[j+1] = max;
			}
		}

	}
	
	for(i = 0; i < 5; i++)
		printf("%3d", a[i]);


	return 0;
}
