#include<stdio.h>
int main()
{
    int i,fact=1,num;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("\n factorial numberof %d is:%d",fact);
    return 0;


}