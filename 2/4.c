#include<stdio.h>

int main(void)
{
	int n, y, r;
	int t;
	scanf("%d %d %d", &n, &y, &r);
	int x = 0;

	if(n % 4 == 0)
	{
		if(n % 100 == 0)
		{	
			if(n % 400 == 0)
			{
				x = 1;
			}

		}
		else
		{
			x = 1;
		}
	}
	printf("%d\n", x);

	switch(y)
	{
		case 1:
		{
			t = r;
			printf("%d %d\n", n, t);
			break;
		}
		case 2:
		{
			t = r + 31;
			printf("%d %d\n", n, t);
			break;
		}
		case 3:
		{
			t = r + 59;
			printf("%d %d\n", n, t);
			break;
		}
		case 4:
		{
			t = r + 90 + x;
			printf("%d %d\n", n, t);
			break;
		}
		case 5:
		{
			t = r + 120 + x;
			printf("%d %d\n", n, t);
			break;
		}
		case 6:
		{
			t = r + 151 + x;
			printf("%d %d\n", n, t);
			break;
		}
		case 7:
		{
			t = r + 181 + x;
			printf("%d %d\n", n, t);
			break;
		}
		case 8:
		{
			t = r + 212 + x;
			printf("%d %d\n", n, t);
			break;
		}
		case 9:
		{
			t = r + 242 + x;
			printf("%d %d\n", n, t);
			break;
		}
		case 10:
		{
			t = r + 273 + x;
			printf("%d %d\n", n, t);
			break;
		}
		case 11:
		{
			t = r + 303 + x;
			printf("%d %d\n", n, t);
			break;
		}
		case 12:
		{
			t = r + 334 + x;
			printf("%d %d\n", n, t);
			break;
		}
		default:
			printf("ni sha bi ba\n");
	}

	return 0;
}
