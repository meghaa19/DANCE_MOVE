#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int i,p,q,n,arr[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>p>>q;
		
		if(p==q)
		{
			arr[i]=0;
		}
		else if(p>q)
		{
			arr[i]=p-q;
		}
	}
	return 0;
	
}

