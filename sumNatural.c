//1.write a program to calculate sum of first N natural number.
#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("enter the value of N");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		sum=sum+i;
		i++;
	}
	printf("sum of n natural number is %d",sum);
	return 0;
}
