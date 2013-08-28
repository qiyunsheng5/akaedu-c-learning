#include<stdio.h>

int main(void)
{
	char a[] = "axcfee";
	int i;
	int j;
	char max;
	int wz;
	char n;

	for(i = 0, max = a[0]; i < 6; i++)
	{
		if(max > a[i+1])
		{
//			wz = i;

//			printf("%d\n", wz);
		}
		else
		{
			max = a[i+1];
			wz = i+1;
		}
	}
	
	for(j = wz; j > 0; j--)
	{
		n = a[j];
//		printf("%c\n", n);
		a[j] = a[j-1];
		a[j-1] = n;
		
	}

	printf("%s\n", a);
		


	return 0;
}
