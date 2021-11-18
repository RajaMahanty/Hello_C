//largest among three
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int num1,num2,num3;
	printf("Enter Number A :- ");
	scanf("%d",&num1);
	printf("\nEnter Number B :- ");
	scanf("%d",&num2);
	printf("\nEnter Number C :- ");
	scanf("%d",&num3);
	if(num1>num2&&num1>num3)
	{
		system("cls");
		printf("%d is bigger than %d and %d",num1,num2,num3);
	}
	if(num2>num1&&num2>num3)
	{
		system("cls");
		printf("%d is bigger than %d and %d",num2,num1,num3);
	}
	if(num3>num1&&num3>num1)
	{
		system("cls");
		printf("%d is bigger than %d and %d",num3,num1,num2);
	}
}
