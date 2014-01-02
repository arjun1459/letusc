/* use of macro to replace sizeof() */
#include<stdio.h>
#define sizeof(a)(char *)( &a+1) -(char *)( &a )
int  main()
{
double i;
printf("%d\n",sizeof(i));
return 0;
}

