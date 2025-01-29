#include<stdio.h>
#define SENVAL 46
int main ()
{
   int p=1,num;
   printf("enter the number %d",SENVAL);
   scanf("%d",&num);
   while(num!=SENVAL)
   {
    p*=num;
    printf("enter the next number %d",SENVAL);
    scanf("%d",&num);
   }
printf("\n product of number is %d\n",p);
return 0;
}