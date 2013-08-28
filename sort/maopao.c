#include <stdio.h>

#define N 10000
#define max 10000

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



int main(void)
{
	int a[N];

	init_array(a, N);
	//show_array(a, N);
	bubble_sort(a, N);
	//show_array(a, N);

	return 0;
}
