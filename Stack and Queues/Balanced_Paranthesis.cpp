bool ispar(string x)
{
stack<char> s;
int top = 0;
int n = x.length();

for(int i=0;i<n;i++)
{
    if(x[i]=='{' || x[i]=='(' || x[i]=='[')
    s.push(x[i]);
    else if(x[i]=='}')
    {
        if(s.empty() || s.top()!='{' )
        return false;
        s.pop();
    }
    else if(x[i]==']')
    {
        if( s.empty() || s.top()!='[')
        return false;
        s.pop();
    }
    else if(x[i]==')')
    {
        if(s.empty() || s.top()!='(')
        return false;
        s.pop();
    }
}
    if(s.empty())
    return true;
    
    return false;
}
