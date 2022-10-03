//2.write a program to calculate sum of first N even natural number.
#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	int i;
	for(i=2;i<=n*2;i=i+2)
	{
		printf("%d ",i);
		sum=sum+i;
	}
	printf("sum is %d",sum);
	return 0;
}
