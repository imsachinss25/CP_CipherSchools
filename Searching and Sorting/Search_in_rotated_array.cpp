#include<bits/stdc++.h>
using namespace std;

int pivot(int a[],int n)
{   
    int start=0,end=n;
    if(start>end)
    return -1;
    
    if(start==end)
    return start;
    while(start<=end)
    {   
        int mid=start+(end-start)/2;
        if(a[mid]>a[mid+1] && mid<end)
        return mid;
        if(a[mid]<a[mid-1] && mid>start)
        return mid-1;
   
        if(a[mid-1]<a[mid] && mid>start)
        start=mid+1;
        else
        end=mid-1;
    }
    return 0;
}
int find(int a[],int n,int x)
{
    int p=pivot(a,n);
    int start=0,end=n;
    if(x>=a[0] && x<=a[p])
    {
        start=0;
        end=p;
    }
    else
    {
        start=p;
        end=n-1;
    }
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(a[mid]==x)
        return mid;
        
        if(a[mid]>x)
        end=mid-1;
        else
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
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cin>>x;
	    cout<<find(a,n,x)<<endl;
	}
}
