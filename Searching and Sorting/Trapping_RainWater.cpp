int trappingWater(int a[], int n){

    // Your code here
    int l[n],r[n];
  l[0]=0;
  r[n-1]=0;
  int maxx=a[0];
  for(int i=1;i<n;i++)
  {
      maxx=max(maxx,a[i-1]);
      l[i]=max(0,maxx-a[i]);
  }
  maxx=a[n-1];
  for(int i=n-2;i>=0;i--)
  {
      maxx=max(maxx,a[i+1]);
      r[i]=max(0,maxx-a[i]);
  }
  int sum=0;
  for(int i=0;i<n;i++)
  {
      sum+=min(l[i],r[i]);
  }
  return sum;
    
}
