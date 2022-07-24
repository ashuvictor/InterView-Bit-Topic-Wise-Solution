
int dp[701][701];
int solve(int i,int j,string A,string B)
{
    if(j==B.size()) return 1;
    if(i==A.size()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(A[i]==B[j])       //characters are same then we have two choices
    {
        int case1=solve(i+1,j+1,A,B);
        int case2=solve(i+1,j,A,B);
        return dp[i][j]=case1+case2;
    }
    else
    {
        return dp[i][j]=solve(i+1,j,A,B);
    }
    
}
int Solution::numDistinct(string A, string B) {
memset(dp,-1,sizeof(dp));
    return solve(0,0,A,B);
    
}

class Solution {
public:
    int numDistinct(string s, string t) {
        int n=t.size();
        int m=s.size();
       vector<vector<unsigned long long >>dp(n+1,vector<unsigned long long >(m+1,0));
        for(int j=0;j<=m;j++)
            dp[0][j]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(t[i-1]==s[j-1])
                    dp[i][j]=dp[i-1][j-1]+dp[i][j-1];
                else
                    dp[i][j]=dp[i][j-1];
            }
        }
        return dp[n][m];
    }
};