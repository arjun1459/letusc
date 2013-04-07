/* to use macro for sizeof() for datatypes*/
#include<stdio.h>
#define sizeof(x) (x *)0+1
int main()
{
printf("%p\n",sizeof(int));
return 0;
}
