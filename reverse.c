//10.write a program to reverse a given number.
#include<stdio.h>
int main()
{
	int n,rev=0,rem;
	printf("enter the given number");
	scanf("%d",&n);
	do
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}while(n!=0);
	printf("Reversed Number is %d",rev);
	return 0;
}
