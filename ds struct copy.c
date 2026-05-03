//copy one structure to another
#include<stdio.h>
struct student
{
	char name[15];
	int rno;
	char gender;
};
int main()
{
	struct student s1={"chana",'b58','f'},s2;
	s2=s1;
	printf("the student details are:");
	printf("name=%s",s2.name);
	printf("rno=%d",s2.rno);
	printf("gender=%s",s2.gender);
	return 0;
}
