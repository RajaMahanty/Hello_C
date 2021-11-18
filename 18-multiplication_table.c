//multiplication table
#include<stdio.h>
void main()
{
	int num,i;
	printf("Enter The Number:- ");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("\n%d x %d = %d",num,i,num*i);
	}
}
