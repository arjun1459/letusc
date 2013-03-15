#include<stdio.h>
int main()
{
int n,m,j;
printf("Enter any number between 1 to 99 : ");
scanf("%d",&n);
printf("You entered ");
if(n>0&&n<=10)
goto one;
else if (n>10&&n<20)
{
m=n%10;
goto two;
}
else if(n>20&&n<100)
{
j=n/10;
n=n%10;
goto three;
}
two:
switch(m)
{
case 1:printf("eleven\n ");
break;
case 2:printf("twelve\n ");
break;
case 3:printf("thirteen\n ");
break;
case 4:printf("fourteen\n ");
break;
case 5:printf("fifteen\n ");
break;
case 6:printf("sixteen\n ");
break;
case 7:printf("seventeen\n ");
break;
case 8:printf("eighteen\n ");
break;
case 9:printf("nineteen\n ");
break;
}
three:
switch(j)
{
case 2:printf("twenty ");
goto one;
case 3:printf("thirty ");
goto one;
case 4:printf("fourty ");
goto one;
case 5:printf("fifty ");
goto one;
case 6:printf("sixty ");
goto one;
case 7:printf("seventy ");
goto one;
case 8:printf("eighty ");
goto one;
case 9:printf("ninety ");
goto one;
}
one:
switch(n)
{
case 1:printf("one\n ");
break;
case 2:printf("two\n ");
break;
case 3:printf("three\n ");
break;
case 4:printf("four\n ");
break;
case 5:printf("five\n ");
break;
case 6:printf("six\n ");
break;
case 7:printf("seven\n ");
break;
case 8:printf("eight\n ");
break;
case 9:printf("nine\n ");
break;
case 10:printf("ten\n ");
break;
}
return 0;
}
