#include<stdio.h>
#include<stdio.h>

int main(void)
{
	int a = 13;
	int b;

	unsigned int i;

	while(a)
	{
		i = a % 2;
		printf("%3d", i);
		b = pow(2, 3);
		a = a - b;
	}


	return 0;
}
