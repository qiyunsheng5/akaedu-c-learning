#include <stdio.h>

int suanyi(int sum, int num)
{
	int i = 0;

	while(i != 32)
	{
		if(num & (1<<i))
			sum++;
		i++;
	}

	return sum;
}

int main(void)
{
	
	int num ;
	int sum = 0;
	int max ;
	
	printf("shuru 2 shuzi\n");
	scanf("%d %d", &num, &max);

	for(; num <= max; num++)
		sum = suanyi(sum, num);
	printf("sum = %d\n", sum);

	return 0;
}
