//3.write the program to calculate sum of first N odd natural number.
#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n*2-1;i=i+2)
	{
		printf("%d ",i);
		sum=sum+i;
	}
	printf("sum of odd n natural number is %d",sum);
	return 0;
}
