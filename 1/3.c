#include<stdio.h>

int main(void)
{
	int a[5] = {9,8,7,6,5};
	int i, j;
	int max;

	for(i = 0; i < 4; i++)
	{
		for(j = i+1; j < 5; j++ )
		{
			if(a[i] > a[j])
			{
				max = a[i];
				a[i] = a[j];
				a[j] = max;
			}
		}
	}
	
	for(i = 0; i < 5; i++)
		printf("%3d", a[i]);

	return 0;
}
