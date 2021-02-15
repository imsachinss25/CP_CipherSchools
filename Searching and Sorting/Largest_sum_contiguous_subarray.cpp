//Kaden's Algorithm

int maxSubarraySum(int arr[], int n){
    int sum=0,ans=arr[0];
    for(int i=0;i<n;i++)
    {
       sum=max(sum+arr[i],arr[i]);
        ans=max(ans,sum);
    }
    return ans;

    
}
