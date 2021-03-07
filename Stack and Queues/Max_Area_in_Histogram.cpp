long getMaxArea(long long a[], int n){
    
   stack<long long> s;
   long long ans=0;
   int i=0;
   while(i<n)
   {
       if(s.empty() || a[s.top()]<=a[i])
       s.push(i++);
       else
       {
          // POP only when we encounter smaller bar
               long long t=s.top(),area;
               s.pop();
               area=a[t]*((s.empty()?i:i - s.top() - 1) ); // calc area of previous bars
               
               ans=max(ans,area);
           
       }
   }
   while(s.empty()==false)
   {
       long long t=s.top(),area;   // remainig bars who dont have next smaller
       s.pop();
       area=a[t]*((s.empty()?i:i - s.top() - 1) );
               
      ans=max(ans,area);
   }
   return ans;
    
}
