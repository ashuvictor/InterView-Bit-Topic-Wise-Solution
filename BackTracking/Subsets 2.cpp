



Given a collection of integers that might contain duplicates, S, return all possible subsets.

Note:

Elements in a subset must be in non-descending order.
The solution set must not contain duplicate subsets.
The subsets must be sorted lexicographically.
Example :

If S = [1,2,2], the solution is:

[
[],
[1],
[1,2],
[1,2,2],
[2],
[2, 2]
]



void solve(int st,int n,vector<int>&A,vector<int>temp,vector<vector<int>>&ans)
{
    ans.push_back(temp);
    for(int i=st;i<n;i++){
        if(i>st and A[i]==A[i-1])
        continue;
        temp.push_back(A[i]);
        solve(i+1,n,A,temp,ans);
        temp.pop_back();
    }
}
vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
       sort(A.begin(),A.end());
    vector<vector<int>>ans;
    vector<int>temp;
    int n=A.size();
    solve(0,n,A,temp,ans);
    return ans;
}
