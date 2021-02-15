int MissingNumber(vector<int>& a, int n) {
    int xorr=0;
    
    for(int i=0;i<n-1;i++)
    {
        xorr=(xorr^(i+1))^(a[i]);
    }
    return (xorr^n);
}
