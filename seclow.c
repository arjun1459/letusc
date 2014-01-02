/*to find second lowest  element of array*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
int size,i,low,seclow, *arr;
printf("Enter size of array=");
scanf("%d",&size);
arr=(int*)malloc(sizeof(int)*size);
for(i=0;i<size;i++)
{
printf("Enter element %d=",i+1);
scanf("%d",&arr[i]);
}
if(arr[0]>arr[1])
{
low=arr[1];
seclow=arr[0];
}
else
{
low=arr[0];
seclow=arr[1];
}
for(i=0;i<size;i++)
{
if(low>arr[i])
{
seclow=low;
low=arr[i];
}
}
printf("Second lowest=%d\n",seclow);
return 0;
}
