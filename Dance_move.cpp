#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
	int i,j,k,n,p,q,arr[1000],count=0;
	cin>>n;
	
	for(i=0;i<n;i++)
		{	count=0;
			cin>>p>>q;
		if (q>p)
			{
				j=p;
			while(j<q+2)
			{
				if(q>p && (q-p)>1)
				{	
					
					j=j+2;
					count++;
				
					if(j-q==1)
					{
						j=j-1;
						count++;
						break;
					}
					else if( j==q)
					{
						break;
					}
				}
		
			}
			
			
				arr[i]=count;
		}
		else if (p>q)
	{
		for(i=0;i<n;i++)
		{	count=0;
			j=p;
			while(j>q)
			{
				if(p>q && (p-q)>1)
				{	
					
					j=j-1;
					count++;
				
					/*if(j-q==1)
					{
						j=j-1;
						count++;
						break;
					}*/
					if( j==q)
					{
						break;
					}
				}
		
			}
			
			
				arr[i]=count;
			
		}
	}
		}
			for(i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
	

return 0;

}
