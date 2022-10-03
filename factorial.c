//6.write a program to calculate factorial of a number.
#include<stdio.h>
int main()
{
	int i,fact=1,number;
	printf("enter the value of number");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		fact=fact*i;
	}
	printf("factorial of this number is %d",fact);
	return 0;
}
