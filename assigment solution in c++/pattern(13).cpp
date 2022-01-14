// i is for row.
// j is for column.


#include<iostream>
using namespace std;

int main()
{
        int n;
        cin>>n;

    for(int i = 1; i <= (2*n) - 1; i++)
    {
        int c = i > n ? n - (i - n) : i;
        int a = n - c;
        for (int noOfSpace = 0; noOfSpace < a; noOfSpace++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= c; j++)
        {
            cout<<"* ";
        }
         cout<<endl;
    
    }
    
}