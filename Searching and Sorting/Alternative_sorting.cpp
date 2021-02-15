class Solution{


	public:
	vector<int> alternateSort(int arr[], int n)
	{
	    int c=0;
	    vector<int> v;
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	        v.push_back(arr[n-c-1]);
	        c++;
	        }
	        else
	        v.push_back(arr[c-1]);
	    }
	    return v;
	   
	}

};
