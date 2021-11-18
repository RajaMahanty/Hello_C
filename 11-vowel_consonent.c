//vowel or consonent
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter An Alphabet:- ");
	scanf("%c",&ch);
	if(ch==65||ch==69||ch==73||ch==79||ch==85||ch==97||ch==101||ch==105||ch==111||ch==117)
	{
		printf("The alphabet %c is vowel",ch);
	}
	else
	{
		printf("The alphabet %c is consonent",ch);
	}
}
