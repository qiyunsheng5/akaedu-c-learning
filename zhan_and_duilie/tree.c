#include <stdio.h>
#include <stdlib.h>
//#include "head.h"
#include "duilie.h"


struct node a[] = {{'a', 1, 2}, {'b', 3, 4}, {'c', 5, 6}, {'d', -1, -1}, {'e', -1, -1}, {'f', -1, -1}, {'g', -1, -1}};



#if 0
void de_travel(int n)
{
	push(a[n].c);
	if(a[n].r != -1) de_travel(a[n].r);
	if(a[n].l != -1) de_travel(a[n].l);
}
#endif
void l_travel(int n, char buf[])
{
	int i = 0;
	enqueue(a[n]);
	struct node t;
	while(!is_empty())
	{
		t = dequeue();
		buf[i++] = t.c;
		if(t.l != -1) 	enqueue(a[t.l]);
		if(t.r != -1) 	enqueue(a[t.r]);
	}
	buf[i] = '\0';
}


int main(void)
{
	int t;
	init_queue(100);
	char buf[20];
//	de_travel(0);
	l_travel(0, buf);
	
	printf("%s\n", buf);
	return 0;
}
