#include<stdio.h>
void main()
{
	int a[5]={};
	int i,j,sum=0;
	for(i=0;i<5;i++)
	{
		printf("Enter The Value Of a[%d] : \n",i+1);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	system("cls");
	printf("The Sum Is : %d",sum);
}
