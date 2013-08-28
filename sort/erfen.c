#include <stdio.h>

#define N 16
#define max 100

void init_array(int a[], int len)
{
	int i;
	srand(time(NULL));
	for(i = 0; i < len; i++)
		a[i] = rand() % max; 
}
void show_array(int a[], int len)
{
	int i;
	for(i = 0; i < len; i++)
		printf("%3d", a[i]);
	printf("\n");
}
void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void bubble_sort(int a[], int len)
{
	int i, j;
	for(i = 0; i < len - 1; i++)
		for(j = 0; j < len - i - 1; j++)
			if(a[j+1] > a[j])
				swap(&a[j+1], &a[j]);
}
int search(int a[], int l, int r, int k)
{
	if(l > r) return 0;
	int m = (l+r) / 2;
	if(k > a[m]) return search(a, m+1, r, k);
	else if(k < a[m]) return search(a, l, m-1, k);
	else return 1;
}
int search2(int a[], int l, int r, int k)
{
	while(l <= r)
	{
		int m = (l+r) / 2;
		if(k > a[m])         r = m-1;
		else if(k < a[m])    l = m+1;
		else return 1;
	}

	return 0;
}

int main(int agrc, char * argv[])
{
	int a[N];
	int k = atoi(argv[1]);
	while(1)
	{
	init_array(a, N);
	bubble_sort(a, N);
	if (search2(a, 0, N-1, k))
		show_array(a, N);
	}
	return 0;
}
