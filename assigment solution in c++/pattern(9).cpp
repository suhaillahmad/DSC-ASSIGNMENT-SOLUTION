// i is for rows.
// j is for column.

#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 0;i<n;i++)
    {
    int x = 1 + i;
    for(int j = 0; j<=i;j++)
      {
        cout<<x<<" ";
        x--;
    }
    cout<<endl;
    }
}

