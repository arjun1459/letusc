/* to print vertical graph */
#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,n,*a;
printf("Enter the number of elements=");
scanf("%d",&n);
a=(int *) malloc(sizeof(int)*n);
printf("Enter elements\n");
for(i=0;i<n;i++)
{
printf("Enter element %d=",i+1);
scanf("%d",&a[i]);
}
for(i=20;i>0;i--)
{
printf("%3d",i);
for(j=0;j<n;j++)
{
if(i<=a[j])
printf("  |");
else
printf("   ");
}
printf("\n");
}
printf("-------------------------------------------------\n   ");
for(i=0;i<n;i++)
printf("%3d",a[i]);
printf("\n");
return 0;
}
