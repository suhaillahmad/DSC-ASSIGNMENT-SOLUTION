#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
            int y = 1;
            while(y <= 2*(n-i))
        {
            cout<<" ";
            y++;
        }
          j = 1;
         while(j<=i)
        {
            cout<<"*";
            j++;
        }
       cout<<endl;
       i++;
    }
    i = n;
    while(i>=1)
    {
        int j = i;
        while(j>=1)
        {
            cout<<"*";
            j--;
        }
        int y = 1;
        while(y<=2*(n-i))
        {
            cout<<" ";
            y++;
        }
           j = i;
        while(j>=1)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;
        i--;
    }

    }