#include<stdio.h>


typedef struct student{

	unsigned int id;
	char name[10];
	int score;

}std;


void write( int *id, char *name, int *score)
{
	printf("shuru id\n");
	scanf("%d", id);
	printf("shuru name\n");
	scanf("%s", name);
	printf("shuru score\n");
	scanf("%d", score);
}

void print(unsigned int id, char name[10], int score)
{
	int i;
	int j;


}



int main(void)
{

	std st[10];
	int i;


	for(i = 0; i < 10; i++)
		write(&st[i].id, st[i].name, &st[i].score);
//	printf("%d\n", st.id);
//	print(st.score);
	
	for(i = 0; i < 9; i++)
	{
		for(j = 1; j < 10 - i; j++ )
		{
			
		}
	}

	return 0;
}
