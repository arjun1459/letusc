/* to find a substring in main string */
#include<stdio.h>
#include<string.h>
int main()
{
	char a[25],b[10];
	int i,j,m,sign=0,cnt=0;
	printf("Enter main string=");
	scanf("%s",a);
	printf("Enter substring =");
	scanf("%s",b);
	for(i=0;i<strlen(a);i++)
	 {
	  if(a[i]==b[0])
	   {
		m=i;
		cnt=i;
		for(j=0;b[j]!='\0';j++)
		 {
		   if(b[j]==a[m])
		    {
		       sign=1; 
		       m++;
		    }
		    else
		    {
		     sign =0;
		     break;
		    }
		 }
	   }
	 }

	if (sign==0)
	printf("sorry not found\n");
	else
	printf("mil gae %d\n",cnt+1);
	return 0;
}
