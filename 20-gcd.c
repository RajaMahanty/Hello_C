//gcd
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1,n2,i,gcd;
	printf("Enter number one :- ");
	scanf("%d",&n1);
	printf("\nEnter number two :- ");
	scanf("%d",&n2);
	for(i=1;i<=n1&&i<=n2;i++)
	{
		if(n1%i==0&&n1%i==0)
		{
			gcd=i;
		}
	}
	system("cls");
	printf("The greatest common factor among %d and %d is %d\n",n1,n2,gcd);
}
