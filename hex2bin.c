/* to convert a hexadecimal number into binary */
#include<stdio.h>
int main()
{
int num,k,i;
printf("Enter a hexadecimal number=");
scanf("%X",&num);
for(i=31;i>=0;i--)
{
k=num>>i;
printf("%d",k&1);
}
return 0;
}

