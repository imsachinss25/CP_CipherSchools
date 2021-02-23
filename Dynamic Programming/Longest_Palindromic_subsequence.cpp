#include <bits/stdc++.h>
using namespace std;


int lps(char *str) 
{ 
   int n = strlen(str); 
   int i, j, cl; 
   int DP[n][n];  
  
  
 
   for (i = 0; i < n; i++) 
      DP[i][i] = 1; 
  
   
    for (cl=2; cl<=n; cl++) 
    { 
        for (i=0; i<n-cl+1; i++) 
        { 
            j = i+cl-1; 
            if (str[i] == str[j] && cl == 2) 
               DP[i][j] = 2; 
            else if (str[i] == str[j]) 
               DP[i][j] = DP[i+1][j-1] + 2; 
            else
               DP[i][j] = max(DP[i][j-1], DP[i+1][j]); 
        } 
    } 
  
    return DP[0][n-1]; 
}
