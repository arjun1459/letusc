/* to reverse a string */
#include<stdio.h>
int main()
{
char a[10];
int i=0;
printf("Enter the string=");
scanf("%s",a);
while(a[i++]);
i--;
while(i>=0)
{
printf("%c",a[i]);
i--;
}
printf("\n");
return 0;
}
