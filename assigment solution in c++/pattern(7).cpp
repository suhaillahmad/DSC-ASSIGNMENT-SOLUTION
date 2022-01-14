#include<iostream>
using namespace std;

int main()
{
    int i,j,k,l;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<i;j++)
        cout<<" ";
        
        for(k=1;k<=6-i;k++)
        cout<<"*";
        
       cout<<endl;
        
    }
}