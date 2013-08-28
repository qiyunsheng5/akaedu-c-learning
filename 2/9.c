#include<stdio.h>

int main(void)
{
	int a[5];
	int num;
	int n = 0;
	
	scanf("%d", &num);

	while(num)
	{
		a[n] = num - (num / 10) * 10;
		n++;
		num /= 10;
	}



	return 0;
}
