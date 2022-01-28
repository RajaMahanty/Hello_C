#include<stdio.h>
void main()
{
//	printf("Hello World!");
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>=1;j--)
		{
			if(j>i)
			{
				printf("  ");
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}
