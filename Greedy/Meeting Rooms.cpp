int Solution::solve(vector<vector<int> > &A) {
    sort(A.begin(),A.end());
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<A.size();i++){
        if(pq.empty())
        {
            pq.push(A[i][1]);
        }
        else
        {
            if(pq.top()<=A[i][0])
            {
                pq.pop();
                pq.push(A[i][1]);
            }
            else
            {
                pq.push(A[i][1]);
            }
        }
    }
    return pq.size();
}
