int minimumJumps(int arr[], int n){
    
    int dp[n];
    for(int i=0;i<n;i++)
    dp[i]=INT_MAX;
    
    dp[0]=0;
    
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(dp[j]!=INT_MAX)
            {
                if(j+arr[j]>=i)
                dp[i]=min(dp[i],dp[j]+1);
            }
        }
    }
    
    if(dp[n-1]==INT_MAX)
    return -1;
    else
    return dp[n-1];    
}
