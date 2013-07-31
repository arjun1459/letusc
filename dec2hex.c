/*to convert decimal to hexadecimal*/
#include<stdio.h>
int main()
{
int num,k,i;
printf("Enter the decimal number=");
scanf("%d",&num);
for(i=28;i>=0;i=i-4)
{ 
k=num>>i;
printf("%d",k&15);
}
return 0;
}
