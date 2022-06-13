Given numRows, generate the first numRows of Pascal's triangle.
Pascal's triangle : To generate A[C] in row R, sum up A'[C] and A'[C-1] from previous row R - 1.

Example:

Given numRows = 5,

Return

[
     [1],
     [1,1],
     [1,2,1],
     [1,3,3,1],
     [1,4,6,4,1]
vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>>ans(A);
    for(int i=0;i<A;i++){
        ans[i].resize(i+1);
        ans[i][0]=ans[i][i]=1;
        for(int j=0;j<i;j++){
    ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
        }
    }
    return ans;
}
Given an index k, return the kth row of the Pascal's triangle.
Pascal's triangle: To generate A[C] in row R, sum up A'[C] and A'[C-1] from previous row R - 1.

Example:

Input : k = 3


Return : [1,3,3,1]

Note: k is 0 based. k = 0, corresponds to the row [1]. 

Note: Could you optimize your algorithm to use only O(k) extra space?.

vector<int> Solution::getRow(int A) {
    if(A==0)
    return {1};
    else if(A==1)
    return {1,1};
    else{
        vector<int>prev={1,1};
        for(int i=2;i<=A;i++){
            vector<int>temp(i+1);
            temp[0]=temp[i]=1;
            for(int j=1;j<i;j++){
                temp[j]=prev[j]+prev[j-1];
            }
            
            prev=temp;
        }
         return prev;
    }
   
}
