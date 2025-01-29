#include<stdio.h>
int main()
{
int age;
printf("enter the age of the person");
scanf("%d",&age);
if(age<18)
{
   printf("the catagory minor");
}

   if(age<65)
     {
        printf("the catagory adult");
     }
   else(age>65)
     {
        printf("the catagory senior");
     }
else
    {
       printf("no vote");
    }
    return 0;
}