#include<iostream>
using namespace std;

int main()
{   int k=1;
int n,t;
cout<<"enter n:";
cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=k;j<=i+k;j++)
		{
			cout<<j<<" ";
			t=j;
		}
	   
	    cout<<endl;
	     k=t+1;
	}
}
