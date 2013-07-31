#include<stdio.h>
void main()
{
short int i;
for(i=1;;i++) //infinite loop to check when i get -ve
{
if(i<0)//if to check what is last +ve value fo i
{
printf("%hd to %hd\n",i-1,i);
break;
}
}
}


