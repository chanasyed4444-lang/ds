#include<stdio.h>
struct student
{
	int rno;
	char name[10];
	float per;
}
s1={101,"anu",98.95};
int main()
{
	struct student s2={102,"uma",89.90},s3;
	printf("enter student 3 details");
	scanf("%d%s%f",&s3.rno,&s3.name,&s3.per);
	display(s1);
	display(s2);
	display(s3);
	return 0;
}
void display(struct student s)
{
	printf("\n %d%s%f",s.rno,s.name,s.per);
}
