//7.write the program to count digits in a given number.
#include<stdio.h>
int main()
{
	int num,count=0;
	printf("entre the number");
	scanf("%d",&num);
	do
	{
	    count++;
	    num=num/10;
	         
    }while(num!=0);
    printf("total digit is %d",count);
    return 0;
}
