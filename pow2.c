/*to check wether a number is power of 2 or not */
#include<stdio.h>
int main()
{
int num;
printf("enter the number=");
scanf("%d",&num);
if((num & num-1)==0)
printf("yes\n");
else 
printf("no\n");
return 0;
}
