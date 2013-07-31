/*To count number of high bits in binary of a number eg if user enter 7 is will show 3 1s */
#include<stdio.h>
int main()
{
int num,count=0;
printf("Enter the number=");
scanf("%d",&num);
while(num>0)
{
count++;
num=num & (num-1);
}
printf("number of 1s are=%d\n",count);
return 0;
} 
