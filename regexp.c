/* to check whether entered string is regular expresssion or not */
#include<stdio.h>
int main()
{
char a[10];
int i,j=0;
printf("Enter a string=");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0' && a[i]<='9')
j++;
}
if(j>0)
printf("regular expression \\d+\n");
return 0;
}
