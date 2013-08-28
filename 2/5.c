#include<stdio.h>

int main(void)
{
	int num = 6632636;
	int a[10];
	int b[10];
	int n;
	int m = 0;
	int i = 0;
	int j;
	int k;
	int h;
	int cout;

	while(num)
	{
		a[i] = num - (num / 10) * 10;
		i ++;
		num /= 10;
	}
//	printf("%d\n", i);

	for(j = 0; j < i; j++)
	{
		cout = 0;
		for(k = j + 1; k < i; k++)
		{
			for(h = 0; h < m; h++)
			{
				if(a[j] == a[b[h]])
				{
					cout = 1;
					printf("ca%d %d\n", j, b[h]);
					break;
				}
			}
			
			if(cout == 1)
				break;

			if(a[j] == a[k])
			{
				printf("%dzhe shu chong fu %d\n", m, a[j]);
				b[m] = k;
				printf("b%d\n", b[m]);
				m++;
				break;
			}
		}
	}


	return 0;
}
