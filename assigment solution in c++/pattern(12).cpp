#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=i;j++)
        {
           i % 2 == 1 && j % 2 == 1 || i % 2 == 0 && j % 2 == 0 ? cout<<"1 " : cout<<"0 ";   // Here you can also use if else 
        }
        cout<<endl;
    }
}
