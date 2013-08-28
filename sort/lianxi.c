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

void cmp(int a[], int l, int m, int r)
{
	int i, j, k;
	int b[r+1];
	k = l;
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

int fen(int a[], int l, int r)
{
	int i, j;
	j = l;
	for(i = l+1; i <= r; i++)
	{
		if(a[i] < a[l])
			swap(&a[i], &a[++j]);
	}
	swap(&a[l], &a[j]);

	return j;
}


void sort(int a[], int l, int r)
{
	if(l >= r) return;
	int m = fen(a, l, r);
	sort(a, l, m-1);
	sort(a, m+1, r);
//	cmp(a, l, m, r);
}



int main(void)
{
	int a[N];

	init_array(a, N);
	show_array(a, N);
	sort(a, 0, N-1);
	show_array(a, N);

	return 0;
}
