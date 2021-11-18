//alphabet or not
#include<stdio.h>
#include<stdlib.h>
void main()
{
	char ch;
	printf("Enter The Character :- ");
	scanf("%c",&ch);
	system("cls");
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{	
     	printf("%c is an alphabet.", ch);
	}
	else
    {
    	printf("%c is not an alphabet.", ch);	
	}

}
