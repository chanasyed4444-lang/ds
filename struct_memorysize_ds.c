#include<stdio.h>
struct student
{
	int rno;
	char name[10];
	float per;
	
};
int main()
{
	printf("size of student structure=%zu bytes\n",sizeof(struct student));
	return 0;
}

