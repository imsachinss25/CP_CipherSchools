// Majority element

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int candidate(int a[],int n)
{
	int s=0,c=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]==a[s])
		c++;
		
		else
		{
			c--;
		}
		if(c==0)
		{
			s=i;
			c=1;
		}
	}
	return a[s];
}

int majority(int a[],int n)
{
	int temp=candidate(a,n);
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==temp)
		c++;
	}
	if(c>n/2)
	return temp;
	
	return -1;
}
int main()
{
	int a[11]={4,2,3,4,4,4,3,4,1,6,4};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<majority(a,n);
}
	
