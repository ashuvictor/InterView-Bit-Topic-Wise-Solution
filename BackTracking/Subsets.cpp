


Given a set of distinct integers, S, return all possible subsets.

Note:

Elements in a subset must be in non-descending order.
The solution set must not contain duplicate subsets.
Also, the subsets should be sorted in ascending ( lexicographic ) order.
The list is not necessarily sorted.
Example :

If S = [1,2,3], a solution is:

[
  [],
  [1],
  [1, 2],
  [1, 2, 3],
  [1, 3],
  [2],
  [2, 3],
  [3],
]



void solve(int st,int n,vector<int>&A,vector<int>temp,vector<vector<int>>&ans){
    ans.push_back(temp);
    for(int i=st;i<n;i++){
        temp.push_back(A[i]);
        solve(i+1,n,A,temp,ans);
        temp.pop_back();
    }
}
vector<vector<int> > Solution::subsets(vector<int> &A) {
    sort(A.begin(),A.end());
    vector<vector<int>>ans;
    vector<int>temp;
    int n=A.size();
    solve(0,n,A,temp,ans);
    return ans;
}
