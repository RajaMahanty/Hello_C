#include<stdio.h>
int main()
{
	int a=12, b=25;
	for(;;)
	{
		a++;
		printf("Hello World!");
		if(a>99)
		break;
	}
	printf("The Output is :- %d",a&b);
	return 0;
}