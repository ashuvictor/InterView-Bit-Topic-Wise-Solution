bool solve(string a,string b){
    if(a==b)
    return true;
    for(int i=0;i<a.size()-1;i++){
        string s1=a.substr(0,i+1);
        string s2=a.substr(i+1);
        string s3=b.substr(0,i+1);
        string s4=b.substr(i+1);
        string s5=b.substr(0,a.size()-1-i);
        string s6=b.substr(a.size()-1-i);
        if((solve(s1,s3) and solve(s2,s4)) or (solve(s1,s6) and solve(s2,s5)) )
        return true;
    }
    return false;
}
int Solution::isScramble(const string A, const string B) {

    return solve(A,B);
}

https://leetcode.com/problems/scramble-string/

map<pair<string,string>,bool>dp;
bool solve(string a,string b){
    if(a==b)
    return true;
    if(dp.count({a,b}))
    return dp[{a,b}];
    for(int i=0;i<a.size()-1;i++){
        string s1=a.substr(0,i+1);
        string s2=a.substr(i+1);
        string s3=b.substr(0,i+1);
        string s4=b.substr(i+1);
        string s5=b.substr(0,a.size()-1-i);
        string s6=b.substr(a.size()-1-i);
        if((solve(s1,s3) and solve(s2,s4)) or (solve(s1,s6) and solve(s2,s5)) )
        return dp[{a,b}]=true;
    }
    return dp[{a,b}]=false;
}
int Solution::isScramble(const string A, const string B) {

    return solve(A,B);
}