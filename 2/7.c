#include<stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	int a[10];
	int b[10] = {0};
	int m, n;
	int i = 0;
	int j;

	while(num)
	{
		
		a[i] = num -(num / 10) * 10;
		i++;
		num /= 10;
	}
	
	for(j = 0; j < i; j++)
	{
		switch(a[j])
		{
			case 0:
				{b[0]++;break;}
			case 1:
				{b[1]++;break;}
			case 2:
				{b[2]++;break;}
			case 3:
				{b[3]++;break;}
			case 4:
				{b[4]++;break;}
			case 5:
				{b[5]++;break;}
			case 6:
				{b[6]++;break;}
			case 7:
				{b[7]++;break;}
			case 8:
				{b[8]++;break;}
			case 9:
				{b[9]++;break;}
		}
	}

	for(j = 0; j < 10; j++)
	{
		printf("%d -> %d\n", j, b[j]);
	}

	return 0;
}
