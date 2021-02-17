	int countwayshelper(string s, int n)
	{
	    if(n==1 || n==0)
	    return 1;
	    
	    if(s[0]=='0')
	    return 0;
	    
	    int count=0;
	    if(s[n-1]>'0')
	    count=countwayshelper(s,n-1);
	    
	    if(s[n-2]=='1' || ( s[n-2]=='2' && s[n-1]<'7'))
	    count+=countwayshelper(s,n-2);
	    
	    return count;
	}
		int CountWays(string s){
		    int n=s.length();
		    if(n==0 || (n==1 && s[0]=='0'))
		    return 0;
		    
		    return (countwayshelper(s,n));
		}
