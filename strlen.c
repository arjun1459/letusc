/* to find of length of string without using inbuilt function */
#include<stdio.h>
int main()
{
char a[10],b[10];
int i=0;
printf("Enter the first string=");
scanf("%s",a);
while(a[i]!='\0')
{
i++;
}
printf("lenght is = %d\n",i);
return 0;
}
