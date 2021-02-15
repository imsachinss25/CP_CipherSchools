void AllParenthesisHelper(vector<string>& v,int n, int open, int close, string s)
{
    if(n==0 || open>n || close>n || close>open)
    return ;
    
   if(open==close && open==n)
    {  
        v.push_back(s);
    }
    AllParenthesisHelper(v,n,open+1,close,s+"(");
    AllParenthesisHelper(v,n,open,close+1,s+")");
    
}

vector<string> AllParenthesis(int n) 
{
    vector<string> v;
    
    AllParenthesisHelper(v,n,0,0,"");
    return v;
}
