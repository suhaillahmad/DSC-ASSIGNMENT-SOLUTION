// i is for rows.
// j is for columns.

#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int i = 1;i<=n;i++)
    {
    char x = 'A' + n - i;     
    for(int j = 1;j<=i;j++)
       {
        cout<<x<<" ";
        x++;
       }
    cout<<endl;
    }
}