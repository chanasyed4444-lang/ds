#include<stdio.h>
#include<string.h>
struct employee
{
	int sal;
	char name[20];
	float exp;
}
e1={10000,"alen",3.5},e2;
int main()
{
	struct employee e3={15000,"bee",5},e4;
	e2.sal=20000;
	strcpy(e2.name,"mullin");
	e2.exp=2.5;
	printf("\nenter e4 salary");
	scanf("%d",&e4.sal);
	printf("\nenter e4 name");
	scanf("%s",e4.name);
	printf("\nenter e4 experience");
	scanf("%f",&e4.exp);
	printf("\n %d%s%f",e1.sal,e1.name,e1.exp);
	printf("\n %d%s%f",e2.sal,e2.name,e2.exp);
	printf("\n %d%s%f",e3.sal,e3.name,e3.exp);
	printf("\n %d%s%f",e4.sal,e4.name,e4.exp);
	return 0;
}
