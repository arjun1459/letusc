/* to add to number without using + operator */
#include<stdio.h>
int main()
{
	int a,b;
	char *p;
	printf("Enter value for a=");
	scanf("%d",&a);
	printf("Enter value for b=");
	scanf("%d",&b);
	p=(char *) a;
	printf("Sum is = %d\n",(int)&p[b]);
	return 0;
}
        
