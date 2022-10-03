//5.write a program to calculate sum of cubes of first N natural numbers.
#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d ",i*i*i);
		sum=sum+i*i*i;
	}
	printf("sum is %d",sum);
	return 0;
}
