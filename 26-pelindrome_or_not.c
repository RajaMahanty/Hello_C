//pelindme or not
#include<stdio.h>
int main()
{
	int num,rev=0,a;
	printf("Enter the number :- ");
	scanf("%d",&num);
	while(num<0)
	{
		a=num%10;
		rev=rev*10+a;
		num/=10;
	}
	if(num==rev)
	{
		printf("The number is not a Palindrome");
	}
	else
	{
		printf("The number is Palindrome");
	}
	return 0;
}
