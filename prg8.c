#include<stdio.h>
int binary (int arr[],int,int);
int main ()
{
  int arr[]={3,4,9,17,27,29,31};
  int key=29;
  int size=7;
  int index=binary(arr,size,key);
  printf("the key %d is in %d",key,index);
  return 0;
}
 int binary(int arr[],int size,int key)
{
    int low,high,mid;
    low=0,high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
     }
     return -1;
}