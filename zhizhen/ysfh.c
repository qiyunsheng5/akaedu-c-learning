#include <stdio.h>


int ysf(int k, int r)
{
	int a[r];
	int sb;
	int i = 0;
	int count = 0;
	int x;
	int kill = 0;

	for(i = 0; i < r; i++)
	{
		if(i == r - 1)
		{
			a[i] = 0;

		}
		else
			a[i] = i + 1;
	}
	
	while(1)
	{
		i = i % r;
		count++;
		if(count == k - 1)
		{
			x = i;
		}
		if(count == k)
		{
			a[x] = a[i];
			x = 1024;
			count = 0;
			kill++;
		}
		i = a[i];
		if(kill ==  r - 1)
			break;
	}
	sb = i + 1;
	return sb;
}



int main(void)
{
	int n = 3;
	int r = 100;
	int nb;

	nb = ysf(n, r);

	printf("nb = %d\n", nb);

	return 0;
}
