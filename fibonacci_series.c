//fibonacci series
#include<stdio.h>
int main()
{
	int ch,a=0,b=1,i=2,c;
	printf("Enter range:- ");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("%d\t",a);
	}
	else if(ch==2)
	{
		printf("%d\t%d\t",a,b);
	}
	else
	{
		printf("%d\t%d\t",a,b);
		while(i++<ch)
		{
			c=a+b;
			printf("%d\t",c);
			a=b;
			b=c;
		}
	}
	return 0;
}
