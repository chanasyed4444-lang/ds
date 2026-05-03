#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[10];
	float per;
}
s1={101,"satya",79.70},s2;
int main()
{s
	struct student s3={103,"ramya",77.90},s4;
	s2.rno=102;
	strcpy(s2.name,"Raju");
	s2.per=80.90;
	printf("enter s4 rno");
	scanf("%d",&s4.rno);
	printf("enter s4 name");
	scanf("%s",s4.name);
	printf("enter s4 per");
	scanf("%f",&s4.per);
	printf("student details are:\n");
	printf("\n %d%s%f",s1.rno,s1.name,s1.per);
	printf("\n %d%s%f",s2.rno,s2.name,s2.per);
	printf("\n %d%s%f",s3.rno,s3.name,s3.per);
	printf("\n %d%s%f",s4.rno,s4.name,s4.per);
	return 0;
	
}
