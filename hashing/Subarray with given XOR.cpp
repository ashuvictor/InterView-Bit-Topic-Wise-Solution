int Solution::solve(vector<int> &A, int B) {
    map<int,int>freq;
    int cnt=0;
    int xxorr=0;
    for(auto it:A)
    {
        xxorr=xxorr^it;
        if(xxorr==B)
        cnt++;
        if(freq.find(xxorr^B)!=freq.end())
        {
            cnt+=freq[xxorr^B];
        }
        freq[xxorr]+=1;
    }
    return cnt;
}
