int findPlatform(int arr[], int dep[], int n)
{
	sort(arr,arr+n);
	sort(dep,dep+n);
	int plat=1,j=0;
	for(int i=1;i<n;i++)
    {
        if(arr[i]<=dep[j])
        plat++;
        else
        j++;
    }
    return plat;
}
