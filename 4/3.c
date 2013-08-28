#include<stdio.h>

int main(void)
{

	printf("%d , %d, %d, %d\n", 0 == 0u, -1 < 0u, 2147483647u > -2147483647 - 1, 2147483647 > (int)2147483648u);

	return 0;
}
