#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,i,j,count=0;
     long long p[100000];
    long long temp,k,total=0;
    scanf("%Ld %Ld",&n,&k);
    for(i=0;i<n;i++)
    {
     scanf("%Ld",&p[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
          if(p[i]>p[j])
          {
           temp=p[i];
              p[i]=p[j];
              p[j]=temp;
          }
        }
             
 total=total+p[i];     
        if(total<=k)
        {           
            count++;
        }
        else
            break;
       // printf("%d ",p[i]);
    }   
    printf("%d",count);
    return 0;
}

