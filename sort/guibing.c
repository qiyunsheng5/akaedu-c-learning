#include <stdio.h>

#define N 1000000
#define max 1000000

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

void merge(int a[], int l, int m, int r)
{
	int i, j, k, b[r+1];
	for(i = l; i <= r; i++)
		b[i] = a[i];
	i = l; j = m+1; k = l;
	while(i <= m && j <= r)
	{
		if(b[i] < b[j])
			a[k++] = b[i++];
		else
			a[k++] = b[j++];
	}
	while(i <= m)
		a[k++] = b[i++];
	while(j <= r)
		a[k++] = b[j++];
}

void merge_sort(int a[], int l, int r)
{
	int m;
	if(l >= r)
		return;
	m = (l+r) / 2;
	merge_sort(a, l, m);
	merge_sort(a, m+1, r);
	merge(a, l, m, r);
}

int main(void)
{
	int a[N];

	init_array(a, N);
//	show_array(a, N);
	merge_sort(a, 0, N-1);
//	show_array(a, N);

	return 0;
}
