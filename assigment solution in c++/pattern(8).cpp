#include<iostream>
using namespace std;

int main()
{
    int i,j,k,l;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
       cout<<" ";
        
        for(k=1;k<=i;k++)
        cout<<"*";
        
        for(k=1;k<i;k++)
        cout<<"*";
        
        
        cout<<endl;
        
    }
}