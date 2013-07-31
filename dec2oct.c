/*to convert decimal to ocatl*/
#include<stdio.h>
int main()
{
int num,k,i;
printf("Enter the decimal number=");
scanf("%d",&num);
for(i=30;i>=0;i=i-3)
{ 
k=num>>i;
printf("%d",k&7);
}
return 0;
}
