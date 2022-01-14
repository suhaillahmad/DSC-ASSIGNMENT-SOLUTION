#include<iostream>
using namespace std;

int main()
{
    int i,j,k,l;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        cout<<"*";
        
        cout<<endl;
    }
    
      for(k=1;k<=4;k++)
    {
        for(l=1;l<=5-k;l++)
        cout<<"*";
        
        cout<<endl;
    }
}