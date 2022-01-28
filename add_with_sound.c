#include<stdio.h>
#include<windows.h>
int main()
{
	int a,b;
	system("color 47");
	printf("Enter number one :- ");
	scanf("%d",&a);
	Beep(700,250);
	printf("\nEnter number two :- ");
	scanf("%d",&b);
	Beep(700,250);
	Sleep(500);
	printf("\nThe sum of %d and %d is %d",a,b,a+b);
	Beep(700,250);
	return 0;
}
