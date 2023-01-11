#include<stdio.h>
struct s
{
	char name[30];
	char course[30];
	long long int u_no;
	int marks;
};
int main()
{
	struct s  a;
	scanf("%*c%[^\n]%*c%[^\n]%lld%d",a.name,a.course,&a.u_no,&a.marks);
	printf("%*c%[^\n]%*c%[^\n]%lld%d",a.name,a.course,a.u_no,a.marks);

}  
