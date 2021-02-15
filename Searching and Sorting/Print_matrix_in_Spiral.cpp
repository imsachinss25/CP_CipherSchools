class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > v1, int row, int c) 
    {
        vector<int> v;
        int top=0,bottom=row-1,left=0,right=c-1;
        
        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
            {  //cout<<i<< " ";
                v.push_back(v1[top][i]);
            }
            top++;
            
            for(int i=top;i<=bottom;i++)
            {
                v.push_back(v1[i][right]);
            }
            right--;
           if(top<=bottom)
           {
            for(int i=right;i>=left;i--)
            {
                v.push_back(v1[bottom][i]);
            }
            bottom--;
           } 
           if(left<=right)
           {
            for(int i=bottom;i>=top;i--)
            {
                v.push_back(v1[i][left]);
            }
            
            left++;
           }
        }
        return v;
    }
};
