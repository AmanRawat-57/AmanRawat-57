/*Function without Return value with Parameters*/
#include<stdio.h>
void sum(int a, int b);
int main()
{
	int num1,num2;
	printf("Enter the first value");
	scanf("%d",&num1);
	printf("Enter the second value");
	 scanf("%d",&num2);
	
	sum(num1, num2);
	
	return 0;
}
void sum(int a, int b)
{
	int sum;
	sum=a+b;
	
	printf("%d",sum);
}
