/*to find second largest element of array*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
int size,i,lar,seclar, *arr;
printf("Enter size of array=");
scanf("%d",&size);
arr=(int*)malloc(sizeof(int)*size);
for(i=0;i<size;i++)
{
printf("Enter element %d=",i+1);
scanf("%d",&arr[i]);
}
for(i=0;i<size;i++)
{
if(lar<arr[i])
{
seclar=lar;
lar=arr[i];
}
}
printf("Second largest=%d\n",seclar);
return 0;
}
