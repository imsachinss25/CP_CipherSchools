void findPathHelper(int i, int j, int m[MAX][MAX], int n,string s, vector<string>& v)
{
    if(i<0 || i>=n || j<0 || j>=n || m[i][j]==0 )
    return;
    else if(i==n-1 && j==n-1){
        v.push_back(s);
        return;
    }
  else
    {
        m[i][j]=0;
    findPathHelper(i+1,j,m,n,s+"D",v);
    findPathHelper(i-1,j,m,n,s+"U",v);
    findPathHelper(i,j+1,m,n,s+"R",v);
    findPathHelper(i,j-1,m,n,s+"L",v);
       m[i][j]=1;
    }
    
    
    
    
    return;
    
}
vector<string> findPath(int m[MAX][MAX], int n) {
    if(n==0)
    return {};
    
    vector<string> v;
    findPathHelper(0,0,m,n,"",v);
    sort(v.begin(),v.end());
    return v;
}
