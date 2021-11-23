//power of an integer
#include<stdio.h>
int main()
{
	int i,power;
	long long num,sum=1;
	printf("Enter the number:- ");
	scanf("%lld",&num);
	printf("\nEnter an exponent:- ");
	scanf("%d",&power);
	if(power==0)
	{
		printf("The sum is :- 0");
	}
	else
	{
		for(i=1;i<=power;i++)
		{
			sum=sum*num;
		}
		printf("\nThe sum is :- %lld",sum);
	}
}
