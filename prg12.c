#include<stdio.h>
int main()
{
    int x,num_pos,num_neg,num_zero;
    printf("enter the number");
    scanf("%d",&x);
    if(x>0)
    {
        num_pos=num_pos+1;
        printf("the number is positive");
    }
    else
    {
        if(x<0)
        {
            num_neg=num_neg+1;
            printf("enter the number is negative");
        }
        else
        {
            num_zero=num_zero+1;
            printf("the number is zero");
        }
    }
    return 0;
}