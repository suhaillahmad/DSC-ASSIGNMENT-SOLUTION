#include<iostream>
using namespace std;

int main()
{
int n=5;
int s=2*n-1;
	for(int i=0;i<(s/2)+1;i++){
		int m=n;
		for(int j=0;j<i;j++){
			cout<<m;
			m--;
		}
		for(int k=0;k<s-2*i;k++){       //. 5 5 5 5 5 5 5 5 5
			cout<<n-i;		//. 5 4 4 4 4 4 4 4 5
		}				//. 5 4 3 3 3 3 3 4 5
		m=n-i+1;			//. 5 4 3 2 2 2 3 4 5
		for(int l=0;l<i;l++){		//. 5 4 3 2 1 2 3 4 5
			cout<<m;		//. 5 4 3 2 2 2 3 4 5
			m++;			//. 5 4 3 3 3 3 3 4 5
		}				//. 5 4 4 4 4 4 4 4 5
		cout<<endl;			//. 5 5 5 5 5 5 5 5 5
	}
	for(int i=s/2-1;i>=0;i--){
		int m=n;
		for(int j=0;j<i;j++){
			cout<<m;
			m--;
		}
		for(int k=0;k<s-2*i;k++){
			cout<<n-i;
		}
		m=n-i+1;
		for(int l=0;l<i;l++){
			cout<<m;
			m++;
		}
		cout<<endl;
	}	  
}  
