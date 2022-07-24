#define pii pair<int,pair<int,int>>
vector<int> Solution::solve(vector<vector<int> > &A) {
    int k,n;
    k=A.size();
    n=A[0].size();
    vector<int>ans;
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    for(int i=0;i<k;i++){
        pq.push({A[i][0],{i,0}});
    }
    while(ans.size()<k*n)
    {
        int val=pq.top().first;
        int row=pq.top().second.first;
        int col=pq.top().second.second;pq.pop();
        ans.push_back(val);
        if(col+1<n)
        {
            pq.push({A[row][col+1],{row,col+1}});
        }
        
        
    }
    return ans;
}
