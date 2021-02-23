vector<long long> nextLargerElement(vector<long long> arr, int n){
    vector<long long> v;
    stack<long long> s;
    
    for(int i=n-1;i>=0;i--)
    {
        if(s.empty())
        v.push_back(-1);
        else
        {
            while(s.empty()==false && s.top()<=arr[i])
            
                s.pop();
                if(s.empty())
                v.push_back(-1);
                else
                v.push_back(s.top());
            
        }
        
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}
