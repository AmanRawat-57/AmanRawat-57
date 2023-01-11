#include<stdio.h>
int main()
{
	int arr[100],n,i;
	printf("Enter the no. of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter array elements : ");
		scanf("%d",&arr[i]);
		if(n%3==0)
		{
			printf("HERA PHERI 3\n");
		}
		else
		printf("flop\n");
	}
		return 0;
}
