//Check if the given number is prime or not
#include<stdio.h>
int main()
{
    int num,i,a=0;
    printf("Enter the number you want to check: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        ++a;
    }
    if(a==2)
    printf("Prime");
    else
    printf("Not Prime");
    return 0;
}
