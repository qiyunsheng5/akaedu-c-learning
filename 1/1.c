#include<stdio.h>

int main(void)
{
	int a[10];
	int n;
	int i = 0;
	int m = 20;
	
	while(1)
	{
		srand(m ++);
		n = rand() % 68;
		
		
		if(n > 17)
		{
			a[i] = n;
			i ++;
//			printf("%d\n", n);

		}

		if(i == 10)
			break;
	}
	for(i = 0; i < 10; i ++)
		printf("a[%d] = %3d", i, a[i]);
	printf("\n");

	int len = (sizeof(a) / sizeof(a[0]));
	printf("%d\n", len);

	for(i = len - 1; i >= 0; i --)
		printf("%d\n", a[i]);

	return 0;
}
