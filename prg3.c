#include<stdio.h>
#define pi 3.14
int main()
{
    float r,area;
    printf("Enter the radius of circle");
    scanf("%f",&r);
    area=pi*r*r;
    printf("area of circle:%f",area);
    return 0;

}