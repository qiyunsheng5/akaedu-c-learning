#include<stdio.h>

int sum1(int a, int s)
{
	s += a;
	printf("%d\n", s);
	a++;
	if(a == 6)
	{
		printf("sum=%d\n", s);
		return 0;
	}
	return sum1(a, s);
}

int main(void)

{
	int n = 1;
	int sum = 0;

	sum1(n, sum);


	return 0;
}
