//leap year
#include<stdio.h>
void main()
{
	int y;
	printf("Enter Year:- ");
	scanf("%d",&y);
	if(y%400==0)
	{
		printf("It's a leap year'");
	}
	else if(y%100==0)
	{
		printf("It's not a leap year'");
	}
		else if(y%4==0)
	{
		printf("It's a leap year'");
	}
	else
	{
		printf("It's not a leap year'");
	}
}
