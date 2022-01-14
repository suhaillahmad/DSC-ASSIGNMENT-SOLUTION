#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for(int space = 0; space < n - row; ++space)
        {
            cout<<"  ";
        }
        for (int col = row; col >= 1; --col)
        {
            cout<<col<<" ";
        }
        for(int col = 2; col <= row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

}
