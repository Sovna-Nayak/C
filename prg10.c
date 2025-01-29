#include<stdio.h>
int main()
{
    char class;
    printf("enter the ship serial number");
    scanf("%c",&class);
    printf("ship of class is %c",class);
    switch(class)
    {
        case 'B':
        case 'b':
          printf("\n bettleship");
          break;
        case 'C':
        case 'c':
          printf("\n cruiser");
          break;
        case 'D':
        case 'd':
           printf("\n dastroyer");
           break;
        case 'E':
        case 'f':
           printf("\n frigate");
           break;
        default:
           printf("\n unknown");
    }

}