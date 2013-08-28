#include<stdio.h>

int main(void)
{
	int a[5] = {6,6,5,8,9};
	int i = 0;
	int min, max;
	int wz;

	for(i = 0, min = a[0]; i < 4; i++)
	{
		if(min < a[i+1])
		{
//			min = a[i];
//			wz = i;
		}
		else
		{
			min = a[i+1];
			wz = i+1;
		}
	}
	printf("%d -> %d\n", wz, min);

	for(i = 0, max = a[0]; i < 4; i++)
	{
		if(max > a[i+1])
		{
//			min = a[i];
//			wz = i;
		}
		else
		{
			max = a[i+1];
			wz = i+1;
		}
	}
	printf("%d -> %d\n", wz, max);

	return 0;
}
