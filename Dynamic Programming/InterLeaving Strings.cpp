bool solve(int i,int j,int k,string A,string B,string C)
{
    if(i==A.size() and j==B.size() and k==C.size())
    return true;
    if(k==C.size())
    return false;
    if(i==A.size() and j==B.size())
    return false;
    if(i==A.size())
    {
        if(B[j]==C[k])
    return solve(i,j+1,k+1,A,B,C);
    else
    return false;
    }
    if(j==B.size())
    {
        if(A[i]==C[k])
        
            return solve(i+1,j,k+1,A,B,C);
            else
            return false;
        
    }
    else if(A[i]==C[k] and B[j]==C[k])
    return solve(i+1,j,k+1,A,B,C) or solve(i,j+1,k+1,A,B,C);
    else if(A[i]==C[k])
    return solve(i+1,j,k+1,A,B,C);
    else if(B[j]==C[k])
    return solve(i,j+1,k+1,A,B,C);
    else
    return false;
    
}
int Solution::isInterleave(string A, string B, string C) {
    return solve(0,0,0,A,B,C);
}



class Solution{
  public:
  int dp[1001][1001];
    /*You are required to complete this method */
    bool solve(string A,string B,string C,int n,int m ,int len){
        if(len==0)
        return 1;
        if(dp[n][m]!=-1)
        return dp[n][m];
        int a=0,b=0;
        if((n-1)>=0 and A[n-1]==C[len-1])
        a=solve(A,B,C,n-1,m,len-1);
        if((m-1)>=0 and B[m-1]==C[len-1])
        b=solve(A,B,C,n,m-1,len-1);
        
        return dp[n][m]=a or b;
    }
    bool isInterleave(string A, string B, string C) 
    {
        //Your code here
        int n=A.length();
        int m=B.length();
        int len=C.length();
        if(len!=n+m)
        return false;
        dp[n][m];
        memset(dp,-1,sizeof(dp));
        return solve(A,B,C,n,m,len);
    }
class Solution{
  public:

    bool isInterleave(string A, string B, string C) 
    {
        //Your code here
        int n=A.length();
        int m=B.length();
        int len=C.length();
        if(len!=n+m)
        return false;
       bool dp[n+1][m+1];
       for(int i=0;i<=n;i++)
       {
           for(int j=0;j<=m;j++){
               if(i==0 or j==0)
               dp[i][j]=true;
               else{
                   int a=0,b=0;
                   if((i-1)>=0 and A[i-1]==C[i+j-1])
                   a=dp[i-1][j];
                   if((j-1)>=0  and B[j-1]==C[i+j-1])
                   b=dp[i][j-1];
                   dp[i][j]= a or b;
               }
           }
       }
       return dp[n][m];
    }

};