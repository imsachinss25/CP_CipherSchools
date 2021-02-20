long long minimumNumberOfCoins(int coins[],int numberOfCoins,int value)
{
    int dp[value+1];
    dp[0]=0;
    
    for(int i=1;i<=value;i++)
    {   
        dp[i]=INT_MAX-1;
        for(int j=0;j<numberOfCoins;j++)
        {
            if(coins[j]>i)
            continue;
            else if(coins[j]==i)
            dp[i]=1;
            else
            {
                dp[i]=min(dp[i],1+dp[i-coins[j]]); // as we treversed to all coin arrays
            }
        }
    }
    if(dp[value]>=INT_MAX-1)
    return -1;
    else
    return dp[value];
}
