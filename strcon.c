/* to concatenate two strings */
#include<stdio.h>
int main()
{
char a[20],b[10];
int i=0,j=0;
printf("Enter string 1=");
scanf("%s",a);
printf("Enter string 2=");
scanf("%s",b);
while(a[++i]);
while(b[j]!='\0')
{
a[j+i]=b[j];
j++;
}
a[j+i]='\0';
printf("%s\n",a);
return 0;
}
