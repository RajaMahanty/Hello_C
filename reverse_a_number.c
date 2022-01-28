//reverse a number
#include<stdio.h>
int main()
{
	int num,rev=0,a;
	printf("Enter the number you want to reverse:- ");
	scanf("%d",&num);
	while(num>0)
	{
		a=num%10;
		rev=10*rev+a;
		num=num/10;
	}
	printf("%d",rev);
}
