#include <stdio.h>
#include <stdlib.h>

typedef struct node * link;
struct node
{
	char item;	
	link l, r;
};

link root = NULL;

link make_node(char item)
{	
	link p = malloc(sizeof(*p));
	p->item = item;
	p->l = NULL;
	p->r = NULL;
	return p;
}

void travels(link t)
{
	if(t == NULL)	
	{
		printf("()");
		return;
	}
	printf("(%c", t->item);
	travels(t->l);
	travels(t->r);
	printf(")");
}

link init(char vlr[], char lvr[], int n)
{
	link t;
	int k = 0;
	if(n <= 0)
		return NULL;

	for(k = 0; vlr[0] != lvr[k]; k++);

	t = make_node(vlr[0]);
	t->l = init(vlr+1, lvr, k);
	t->r = init(vlr+1+k, lvr+1+k, n-k-1);

	return t;
}

int depth(link p)
{
	if(!p)
		return 0;

	int i = depth(p->l);
	int j = depth(p->r);

	return 1 + (i > j ? i : j);
}


int pingheng(link p)
{
	if(p == NULL)
		return 1;
	int lc = depth(p->l);
	int rc = depth(p->r);
		
	if(lc - rc >= 2 || rc - lc >= 2)
		printf("%c is not pingheng\n", p->item);

	if(pingheng(p->l) == 0 || pingheng(p->r) == 0)
		return 0;
	
	if(lc - rc >= 2 || rc - lc >= 2)
		return 0;
	
	return 1;
}

link insert(link t, char key)
{
	if(!t)
		return make_node(key);

	if(t->item < key)
		t->r = insert(t->r, key);
	else if(t->item > key)
		t->l = insert(t->l, key);
	else
		printf("same node %c\n", key);
	return t;
}


link search(link t, char c)
{
	if(!t)
		return NULL;
		
	if(t->item < c)
		return search(t->r, c);
	else if(t->item > c)
		return search(t->l, c);

	return t;
}


int main(void)
{
#if 0
	char prev_seq[] = "4213657";
	char in_seq[]   = "1234567";

	root = init(prev_seq, in_seq, 7);


	char prev_seq[] = "421356";
	char in_seq[]   = "123456";
	root = init(prev_seq, in_seq, 6);
#endif
#if 0	
	link a, b, c, d, e, f;

	a = make_node('4');
	b = make_node('2');
	c = make_node('5');
	d = make_node('1');
	e = make_node('3');
	f = make_node('6');
	
	a->l = b;
	a->r = c;
//	b->l = d;
//	b->r = e;
	f->l = d;
	c->r = f;
	d->l = e;
	root = a;
	
#endif
	
	link root = NULL;
	while(1)
	{
		char ch;
		ch = getchar();
		getchar();
		if(ch == 'q')
			break;
		root = insert(root, ch);

		printf("\\tree ");
		travels(root);
		printf("\n");
		fflush(stdout);
	}
	printf("........\n");
	while(1)
	{
		char ch = getchar();
		getchar();
		if(ch == '0')
			break;
		link p = search(root, ch);
		if(p != NULL)
			printf("%c is found\n", ch);
		else
			printf("not found\n");
	}
	int count = 0;
	count = depth(root);	
	printf("count = %d\n", count);
	int i = pingheng(root);
	printf("%d\n", i);

	return 0;
}
