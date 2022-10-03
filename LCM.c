//9.write a program to calculate LCM of two numbers.
#include<stdio.h>
int main()
{
	int n1,n2,L;
	printf("enter two number");
	scanf("%d %d",&n1,&n2);
	for(L=n1>n2?n1:n2;L<=n1*n2;L++)
	{
		if(L%n1==0&&L%n2==0)
		break;
	}
	printf("Lcm is :%d",L);
	return 0;
}
