//swap two numbers
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int num1,num2,num3;
	printf("Enter Number :- ");
	scanf("%d",&num1);
	printf("\nEnter Number :- ");
	scanf("%d",&num2);
	system("cls");
	num3=num1;
	num1=num2;
	num2=num3;
	printf("A = %d\tB = %d",num1,num2);
}
