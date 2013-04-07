/* to convert a decimal to binary number */
#include<stdio.h>
int main()
{
int num,k,i;
//printf("Enter the number in decimal form=");
//scanf("%d",&num);
num=-1<<4;
for(i=31;i>=0;i--)
{
k=num>>i;
if(k&1==1)
printf("1");
else
printf("0");
}
return 0;
}
