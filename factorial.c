//factorial of a number
#include<stdio.h>
void main()
{
	int num,sum=1;
	printf("Enter The Number:- ");
	scanf("%d",&num);
	for(int i=num;i>=1;i--)
	{
		sum=sum*i;
	}
	printf("\nThe Sum Is :- %d",sum);
}
