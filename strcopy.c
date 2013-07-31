/* to copy one string from one to another */
#include<stdio.h>
int main()
{
char a[10];
char b[10];
int i=0;
printf("Enter the first string=");
scanf("%s",a);
while(a[i]!='\0')
{
b[i]=a[i];
i++;
}
printf("%s\n",b);
return 0;
}
