#include<bits/stdc++.h>
using namespace std;

void permute(string s, int start, int end)
{
    if(start==end)
    {
        cout<<s<<" ";
        return ;
    }
    for(int i=start;i<end;i++)
    {
        swap(s[start],s[i]);
        permute(s,start+1,end); // fixing s[start]
        swap(s[start],s[i]);  // backtrackting 
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        permute(s,0,s.length());
        cout<<endl;
    }
}
