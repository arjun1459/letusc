/* to check struct padding in c */
#include<stdio.h>
struct ra
{
char a;
char b;
int c;
}r1;
int main()
{
printf("%p %p %p",&r1.a,&r1.b,&r1.c);
return 0;
}
