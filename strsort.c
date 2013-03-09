/* to sort alphabets of an string */
#include<stdio.h>
int main()
{
int  i,j;
char a[10];
printf("Enter string=");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]>a[j])
{
a[i]=a[i]^a[j];
a[j]=a[i]^a[j];
a[i]=a[i]^a[j];
}
}
printf("%s\n",a);
return 0;
}
