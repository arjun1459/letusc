/*to print horizontal graph */
#include<stdio.h> 
int main()
{
int a[]={10,2,13,3,18,4,8,4,12,15,3};
int i,j,k;
for(k=0;k<20;k++)
printf("%3d",k+1);
printf("\n");
for(i=0;i<11;i++)
 {
   for(j=0;j<a[i];j++)
	{
	 printf("===");
	}
  printf("\n");
 }
return 0;
}

