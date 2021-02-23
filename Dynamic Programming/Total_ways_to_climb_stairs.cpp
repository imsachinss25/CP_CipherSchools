long long countWays(int m){
    // your code here
    long long dp[m+1]={0};
    dp[0]=1;
    dp[1]=1;
    
    for(long long i=2;i<=m;i++)
    dp[i]=(dp[i-1]+dp[i-2])%(1000000007);
    
    
    return dp[m];
}
