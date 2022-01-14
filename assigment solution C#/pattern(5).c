#include<stdio.h>

void main()
{
    int i,j,k,l;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        printf("*");
        
        printf("\n");
    }
    
      for(k=1;k<=4;k++)
    {
        for(l=1;l<=5-k;l++)
        printf("*");
        
        printf("\n");
    }
}