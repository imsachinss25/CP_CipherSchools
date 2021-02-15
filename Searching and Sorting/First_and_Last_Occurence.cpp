#include <bits/stdc++.h>
using namespace std;

int first(int a[],int start, int n, int x)
{ int end=n;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        
        if((a[mid]==x && mid>0 && a[mid-1]<x )|| (a[mid]==x && mid==0))
        return mid;
        
        if(a[mid]>=x)
        end=mid-1;
        else if(a[mid]<x)
        start=mid+1;
        
        
    }
    return -1;
}

int last(int a[],int start, int n, int x)
{ 
    int end=n;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        
        if((a[mid]==x && mid<n && a[mid+1]>x) || (a[mid]==x && mid==n-1))
        return mid;
        
        if(a[mid]>x)
        end=mid-1;
        else if(a[mid]<=x)
        start=mid+1;
        
        
    }
    return -1;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    if(first(a,0,n,x)==-1)
	    cout<<-1<<endl;
	    else
	    cout<<first(a,0,n,x)<<" "<<last(a,0,n,x)<<endl;
	}
}
