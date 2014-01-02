/* to check whether a cpu is big endian or little endian */
#include<stdio.h>
int main()
{
int i= 260;
char *b=&i;
if(*b==4)
printf("little endian\n");
else
printf("big endian\n");
return 0;
}

