//count the number of digit in interger number
#include<stdio.h>
int main()
{
	long long num;
	int digit=0;
	printf("Ener an integer number:- ");
	scanf("%lld",&num);
	while(num!=0)
	{
		digit++;
		num=num/10;
	}
	printf("\nThe number of digit in this number is :- %d",digit);
}
