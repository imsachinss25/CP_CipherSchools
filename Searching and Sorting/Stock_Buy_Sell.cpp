void stockBuySell(int price[], int n)
{
    int b=1,c=0;
    for(int i=0;i<n-1;i++)
    {
        if(price[i+1]>price[i] && b==1)
        {
            cout<<"("<<i<<" ";
            b=0;
        }
        if(price[i+1]<price[i] && b==0)
        {
            cout<<i<<")"<<" ";
            b=1;
            c=1;
        }
         if(i==n-2 && b==0)
        {
            if(price[n-1]>=price[n-2])
            cout<<i+1<<")"<<" ";
            else if(price[n-1]<price[n-2])
            cout<<i<<")"<<" ";
            
            c=1;
        }
    }
    if(c==0)
    cout<<"No Profit";
    
}
