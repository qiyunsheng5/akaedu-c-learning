#ifndef STUDENT_H
#define STUDENT_H


extern int load(int argc, char * argv[]);
extern int list(int argc, char * argv[]);
extern int sort(int argc, char * argv[]);
extern int find(int argc, char * argv[]);

typedef struct student * link;
struct student
{
	char name[32];
	char cname[16];
	int age;
	char gender[4];
	char native[16];
	char mobile[16];
	char qq[16];
	char email[32];
	char hobby[128];
	link next;
};

typedef struct student stu_t;
link head;
link tail;

#endif
