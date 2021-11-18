//even or odd
#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number you want to check :- ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("The number %d is even",num);
	}
	else
	{
		printf("The number %d is odd",num);
	}
}
