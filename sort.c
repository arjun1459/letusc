/* to sort an array */
#include<stdio.h>
int main()
{
int num,i,j;
int *a;
printf("Enter size of array=");
scanf("%d",&num);
a=(int *)malloc(num*sizeof(int));//to allocate memory at runtime we use malloc
for(i=0;i<num;i++) 
{
printf("Enter element number %d=",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
for(j=i+1;j<num;j++)
{
if(a[i]>a[j])
{
a[i]=a[i]^a[j];
a[j]=a[i]^a[j];
a[i]=a[i]^a[j];
}
}
printf("Array after scanning\n");
for(i=0;i<num;i++)
printf("%d\n",a[i]);
return 0;
}
