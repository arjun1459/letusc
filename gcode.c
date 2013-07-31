/*to find grey code of a number */
#include<stdio.h>
int main()
{
int num;
printf("Enter the number=");
scanf("%d",&num);
num=num ^ (num>>1);
printf("%d\n",num);
return 0;
}
