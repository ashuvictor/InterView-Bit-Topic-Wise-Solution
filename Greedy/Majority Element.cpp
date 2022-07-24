int Solution::majorityElement(const vector<int> &A) {
    int cnt=0;
    int ans=-1;
    for(auto x:A)
    {
        if(cnt==0)
        {
            ans=x;
            cnt=1;
        }
        else if(ans==x)
        cnt++;
        else
        cnt--;
    }
    return ans;
}
