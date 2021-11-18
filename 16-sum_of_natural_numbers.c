//sum of natural numbers
#include<stdio.h>
void main()
{
	int num,sum=0;
	printf("Enter The Number:- ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	printf("\nThe Sum Is :- %d",sum);
}
