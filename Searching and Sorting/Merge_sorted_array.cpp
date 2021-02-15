// Merge Sorted Arrays

#include <bits/stdc++.h> 
using namespace std; 

void merge(int a[],int b[],int c[])
{
	int i=0,j=0,k=0;
	while(i<5 && j<5)
	{
		if(a[i]<b[j])
		c[k++]=a[i++];
		else
		c[k++]=b[j++];
	}
	
	while(i<5)
	c[k++]=a[i++];
	
	while(j<5)
	c[k++]=b[j++];
	

}
  

int main() 
{ 
int a[5]={4,9,11,34,56};
int b[5]={0,1,13,39,60};
int c[10];

merge(a,b,c);
	for(int i=0;i<10;i++)
cout<<c[i]<<" ";

} 
